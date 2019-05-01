
#include "Parrilla.h"

/*
Esta función realiza el backtracking para los slots y las aulas, generando la parrilla final

-slots: Cantidad de slots a generar (3 slots en 5 días = 25 slots)
-aulas: número de aulas por asignar a cada slot
-nTFGs: número total de TFGs por asignar
-listTFG: lista de TFGs
-profesores: lista de profesores
-numProfesores: El número de profesores en la BBDD
*/

Parrilla::Parrilla() {

	convocatoria = 0;
	nslots = 0;
	naulas = 0;
	nTFGs = 0;
	nProf = 0;
	exito = false;

}

Parrilla::Parrilla(int convocatoria, int nslots, int naulas, int nTFGs, int nProf) {

	this->convocatoria = convocatoria;
	this->nslots = nslots;
	this->naulas = naulas;
	this->nTFGs = nTFGs;
	this->nProf = nProf;
	exito = false;

	presentaciones = (Presentacion**)malloc(nTFGs * sizeof(Presentacion*));

}

Parrilla::~Parrilla() {
	free(presentaciones);
}


void Parrilla::generarParrilla(TFG *listTFG, Profesor *profesores) {

	exito = false;
	int i;

	bitAulas = (int*)malloc(nslots * sizeof(int));
	for (i = 0; i < nslots; i++) bitAulas[i] = 0;

	bitProf = (short**)malloc(nProf * sizeof(short*));

	for (i = 0; i < nProf; i++) {
		bitProf[i] = (short*)malloc(nProf * sizeof(short));

		for (int j = 0; j < nslots; j++) bitProf[i][j] = 0; // Si el bit está a 0, no está asignado. Cuando un TFG se asigne, se pondrá a 1
	}

	generarPresentacion(listTFG, 0, profesores); 

	if (!exito) cout << "Parrilla creada con éxito" << endl;
	else cout << "Lo sentimos, no existe ninguna combinación posible" << endl;
}

/*
Esta función realiza el backtracking para los TFGs

-slot: el slot para el TFG
-aulas: número de aulas por asignar a este slot
-naula: numero de aulas con TFG asignado a este slot
-listTFG: lista de TFGs
-profesores: lista de profesores
-presentaciones: lista de presentaciones generada
-bitmap: bitmap de TFGs asignados
*/

void Parrilla::generarPresentacion(TFG *listTFG, int TFG, Profesor *profesores) {

	if (nTFGs == TFG) {
		exito = true;
		return;
	}

	for (int slot = 0; slot < nslots; slot++) {

		if (bitAulas[slot] == naulas) continue;

		int* jurado = (int*)malloc(4 * sizeof(int));
		for (int i = 1; i < 4; i++) jurado[i] = -1;
		jurado[0] = 0;				// jurado[0] te indica cuántos profesores lleva

		generarTribunal(slot, listTFG, TFG, profesores, jurado); //generamos un tribunal para la presentación

		if (exito) return;
		else free(jurado);
		//listTFG[TFG].eliminarPresentacion();
	}

	generarPresentacion(listTFG, TFG, profesores);
	return;
}


void Parrilla::generarTribunal(int slot, TFG *listTFG, int TFG, Profesor *profesores, int *jurado) {

	if (jurado[0] == 3) {

		listTFG[TFG].crearPresentacion(slot / SLOTS, bitAulas[slot], slot, 0);		// Crea la presentación, el 0 es de Convocatoria
		Presentacion *aux = &listTFG[TFG].getPresentacion();

		for (int i = 0; i < jurado[0]; i++) aux->addJurado(profesores[jurado[i + 1]]);

		bitAulas[slot]++;

		presentaciones[TFG] = aux;		// Guardar la presentación en la parrilla

		// Mirar aquí si el tutor puede;

		generarPresentacion(listTFG, TFG + 1, profesores);

		if (!exito) {

			listTFG[TFG].eliminarPresentacion();
			
			presentaciones[TFG] = NULL;

			bitAulas[slot]--;

		}
		return;
	}

	int profesor = 0;
	if (jurado[0] > 1) profesor = jurado[jurado[0]] + 1;	// Elimina variaciones por orden

	for (profesor; profesor < nProf; profesor++) {

		int* grados = profesores[profesor].getGrados(); // Recibir los grados del profesor;
		bool aux = false;

		for (int i = 0; i < 4; i++) {
			if (listTFG[TFG].getGrado() == grados[i]) aux = true;
		}
		if (!aux) continue;

		if (!profesores[profesor].getDisponibilidad().getDisponibilidad(slot / SLOTS, slot)) continue;

		if (bitProf[profesor][slot]) continue;

		if (jurado[0] == 0 && !profesores[profesor].getDoctorado()) continue;

		if (jurado[0] == 1 && profesor < jurado[1] && profesores[profesor].getDoctorado()) continue;	// Elimina variaciones por orden

		jurado[0]++;
		jurado[jurado[0]] = profesor;
		bitProf[profesor][slot] = 1;

		generarTribunal(slot, listTFG, TFG, profesores, jurado); //generamos un tribunal para la presentación

		if (exito) return;
		else {

			jurado[jurado[0]] = -1;
			jurado[0]--;
			bitProf[profesor][slot] = 0;
		}
	}

	return;
}
