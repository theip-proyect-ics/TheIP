
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
	valorAulas = 0;
	valorDias = 0;
	exito = false;

}

Parrilla::Parrilla(int convocatoria, int nslots, int naulas, int nTFGs, int nProf) {

	this->convocatoria = convocatoria;
	this->nslots = nslots;
	this->naulas = naulas;
	this->nTFGs = nTFGs;
	this->nProf = nProf;
	valorAulas = 0;
	valorDias = 0;
	exito = false;

	presentaciones = (Presentacion**)malloc(nTFGs * sizeof(Presentacion*));
	presAulas = (Presentacion**)malloc(nTFGs * sizeof(Presentacion*));
	presDias = (Presentacion**)malloc(nTFGs * sizeof(Presentacion*));

	for (int i = 0; i < nTFGs; i++) {
		presentaciones[i] = NULL;
		presAulas[i] = NULL;
		presDias[i] = NULL;
	}

}

Parrilla::~Parrilla() {
	free(presentaciones);
}


void Parrilla::generarParrilla(TFG *listTFG, Profesor *profesores) {

	cout << "generar parrilla" << endl;

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

	cout << nTFGs << endl;

	for (int i = 0; i < nTFGs; i++) {

		cout << "Presentación " << i << ":" << endl;

		cout << "Dia: " << presAulas[i]->getDia() << ", slot: " << presAulas[i]->getSlot() << ", aula: " << presAulas[i]->getAula() << endl;
		cout << "   jurado 1: " << presAulas[i]->GetJurado(0)->getNombre() << endl;
		cout << "   jurado 2: " << presAulas[i]->GetJurado(1)->getNombre() << endl;
		cout << "   jurado 3: " << presAulas[i]->GetJurado(2)->getNombre() << endl << endl;

	}


	if (presDias[0] != NULL) cout << "Parrilla creada con éxito" << endl;
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

	cout << "generar presentacion " << TFG << endl;

	if (nTFGs == TFG) {
		//exito = true;			// No buscar la mejor 
		valorarParrilla();		// Buscar la mejor
		return;
	}


	for (int slot = 0; slot < nslots; slot++) {

		if (bitAulas[slot] == naulas) continue;

		int* jurado = (int*)malloc(4 * sizeof(int));
		for (int i = 1; i < 4; i++) jurado[i] = -1;
		jurado[0] = 0;				// jurado[0] te indica cuántos profesores lleva


		cout << "   en el slot " << slot << endl;

		generarTribunal(slot, listTFG, TFG, profesores, jurado); //generamos un tribunal para la presentación

		if (exito) return;
		else free(jurado);
		//listTFG[TFG].eliminarPresentacion();
	}

	//generarPresentacion(listTFG, TFG, profesores);
	return;
}


void Parrilla::generarTribunal(int slot, TFG *listTFG, int TFG, Profesor *profesores, int *jurado) {

	//cout << "Num jurados: " << jurado[0] << " - " << nProf << endl;
	
	if (jurado[0] == 3) {

		listTFG[TFG].crearPresentacion(slot / SLOTS, bitAulas[slot], slot, 0);		// Crea la presentación, el 0 es de Convocatoria
		Presentacion *aux = &listTFG[TFG].getPresentacion();

		for (int i = 0; i < jurado[0]; i++) aux->addJurado(&profesores[jurado[i + 1]]);

		bitAulas[slot]++;

		presentaciones[TFG] = aux;		// Guardar la presentación en la parrilla

		// Mirar aquí si el tutor puede;
		if (listTFG[TFG].getTutor()->getDisponibilidad()->getDisponibilidad(slot / SLOTS, slot))
			aux->addJurado(listTFG[TFG].getTutor());

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

	int* grados;
	bool aux;
	int gradTFG;

	for (profesor; profesor < nProf; profesor++) {

		//cout << "   buscar profesor " << profesor << endl;

		grados = profesores[profesor].getGrados(); // Recibir los grados del profesor;
		aux = false;
		gradTFG = listTFG[TFG].getGrado();

		cout << "grado del TFG: " << gradTFG << " - " << profesores[profesor].getNGrados() << endl;


		for (int i = 0; i < profesores[profesor].getNGrados(); i++) {
			cout << "   grado del profesor: " << grados[i] << endl;
		}

		for (int i = 0; i < profesores[profesor].getNGrados(); i++) {
			cout << grados[i] << " - ";
			if (gradTFG == grados[i]) {
				aux = true;
				break;
			}
		}

		cout << endl;

		cout << "paso 0" << endl;

		if (!aux) {
			cout << "No está en el grado" << endl;
			continue;
		}

	
		

		if (!profesores[profesor].getDisponibilidad()->getDisponibilidad(slot / SLOTS, slot)) {
			cout << "No esta disponible" << endl;
			continue;
		}

		cout << "paso 1" << endl;

		if (bitProf[profesor][slot]) {
			cout << "Ya está elegido" << endl;
			continue;
		}

		cout << "paso 1" << endl;

		int numProfJur = profesores[profesor].getNumTFGs(gradTFG);

		if (numProfJur <= 0) {
			cout << "No le quedan jurados" << endl; 
			continue;
		}

		if (jurado[0] == 0 && !profesores[profesor].getDoctorado()) {
			cout << "No es doctor" << endl;
			continue;
		}

		cout << "paso 2" << endl;

		if (jurado[0] == 1 && profesor < jurado[1] && profesores[profesor].getDoctorado()) continue;	// Elimina variaciones por orden

		cout << " El profesor concuerda" << endl;

		jurado[0]++;
		jurado[jurado[0]] = profesor;
		bitProf[profesor][slot] = 1;
		profesores[profesor].setNumTFGs(gradTFG, numProfJur - 1);

		cout << " Siguiente" << endl;

		generarTribunal(slot, listTFG, TFG, profesores, jurado); //generamos un tribunal para la presentación

		if (exito) return;
		else {

			jurado[jurado[0]] = -1;
			jurado[0]--;
			bitProf[profesor][slot] = 0;
			profesores[profesor].setNumTFGs(gradTFG, numProfJur);
		}
	}

	return;
}

int Parrilla::valorarParrilla() {
	
	int valor = 0;
	int aulasUt = 0;
	unsigned int diasExtra = 0;
	unsigned int aulasExtra = 0;
	unsigned int tutores = 0;

	// Ahorrar Días

	for (int i = nslots - 1; i >= 0; i--) {
		if (bitAulas[i] > 0) break;

		if (i % SLOTS == 0) diasExtra++;
	}

	for (int i = nslots - 1; i >= 0; i--)
		if (aulasUt < bitAulas[i]) aulasUt = bitAulas[i];

	aulasExtra = naulas - aulasUt;

	for (int i = 0; i < nTFGs; i++)
		if (presentaciones[i]->GetJurado(3) != NULL) tutores++;

	valor = diasExtra * 8 + aulasExtra * 5 + tutores;

	if (valor > valorDias) {
		for (int i = 0; i < nTFGs; i++) {
			presDias[i] = presentaciones[i];
		}
		valorDias = valor;
	}

	valor = diasExtra * 5 + aulasExtra * 8 + tutores;

	if (valor > valorAulas) {
		for (int i = 0; i < nTFGs; i++) {
			presAulas[i] = presentaciones[i];
		}
		valorAulas = valor;
	}

	return 0;
}
