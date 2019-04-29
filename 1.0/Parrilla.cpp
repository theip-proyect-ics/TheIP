
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

Parrilla generarParrilla(int slots, int aulas, int nTFGs, TFG *listTFG, Profesor *profesores, int numProfesores) {

	int auxTFGs = 0; // cantidad de TFGs asignados
	bool exito = false;
	int i;

	int* bitAulas = (int*)malloc(slots * sizeof(int));
	for (i = 0; i < slots; i++) bitAulas[i] = 0;

	short** bitProf = (short**)malloc(numProfesores * sizeof(short*));

	for (i = 0; i < numProfesores; i++) {
		bitProf[i] = (short*)malloc(numProfesores * sizeof(short));

		for (int j = 0; j < slots; j++) bitProf[i][j] = 0; // Si el bit está a 0, no está asignado. Cuando un TFG se asigne, se pondrá a 1
	}

	Parrilla parrilla; // Llamar al constructor cuando se cree en la BBDD

	generarPresentacion(slots, aulas, listTFG, nTFGs, 0, profesores, numProfesores, &parrilla, bitAulas, bitProf, &exito); 

	if (!exito) cout << "Parrilla creada con éxito" << endl;
	else cout << "Lo sentimos, no existe ninguna combinación posible" << endl;
		
	return parrilla;
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

void generarPresentacion(int slots, int aulas, TFG *listTFG, int nTFGs, int TFG, Profesor *profesores, int numProf, Parrilla *parrilla, int *bitAulas, short **bitProf, bool *exito) {

	if (nTFGs == TFG) {
		*exito = true;
		return;
	}

	for (int slot = 0; slot < slots; slot++) {

		if (bitAulas[slot] == aulas) continue;

		int* jurado = (int*)malloc(4 * sizeof(int));
		for (int i = 1; i < 4; i++) jurado[i] = -1;
		jurado[0] = 0;				// jurado[0] te indica cuántos profesores lleva

		generarTribunal(slots, slot, aulas, listTFG, nTFGs, TFG, profesores, numProf, parrilla, bitAulas, bitProf, exito, jurado); //generamos un tribunal para la presentación

		if (exito) return;
		else free(jurado);
		//listTFG[TFG].eliminarPresentacion();
	}

	generarPresentacion(slots, aulas, listTFG, nTFGs, TFG, profesores, numProf, parrilla, bitAulas, bitProf, exito);
	return;
}


void generarTribunal(int slots, int slot, int aulas, TFG *listTFG, int nTFGs, int TFG, Profesor *profesores, int numProf, Parrilla *parrilla, int *bitAulas, short **bitProf, bool *exito, int *jurado) {

	if (jurado[0] == 3) {

		listTFG[TFG].crearPresentacion(slot / SLOTS, bitAulas[slot], slot, 0);		// Crea la presentación, el 0 es de Convocatoria
		Presentacion *aux = &listTFG[TFG].getPresentacion();

		for (int i = 0; i < jurado[0]; i++) aux->addJurado(profesores[jurado[i + 1]]);

		bitAulas[slot]++;

		//parrilla->presentaciones[TFG] = *aux;		GUARDAR EN PARRILLA CUANDO ESTÉ CREADA LA CLASE

		// Mirar si el tutor puede;
		generarPresentacion(slots, aulas, listTFG, nTFGs, TFG + 1, profesores, numProf, parrilla, bitAulas, bitProf, exito);

		if (!exito) {

			listTFG[TFG].eliminarPresentacion();
			// parrilla->presentaciones[TFG];	ELIMINAR LA PRESENTACIÓN DE LA PARRILLA CUANDO ESTÉ CREADA LA CLASE
			bitAulas[slot]--;

		}
		return;
	}

	int profesor = 0;
	if (jurado[0] > 1) profesor = jurado[jurado[0]] + 1;	// Elimina variaciones por orden

	for (profesor; profesor < numProf; profesor++) {

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

		generarTribunal(slots, slot, aulas, listTFG, nTFGs, TFG, profesores, numProf, parrilla, bitAulas, bitProf, exito, jurado); //generamos un tribunal para la presentación

		if (exito) return;
		else {

			jurado[jurado[0]] = -1;
			jurado[0]--;
			bitProf[profesor][slot] = 0;
		}
	}

	return;
}