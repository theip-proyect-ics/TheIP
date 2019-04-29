#pragma once
#include <string>
#include <stdlib.h>
#include <iostream>

#include "TFG.h"
#include "Presentacion.h"
#include "Profesor.h"

#define SLOTS 5

class Parrilla {

	int convocatoria;
	int nslots;
	int naulas;
	int nTFGs;
	int nProf;

	Presentacion *presentaciones;

public: 
};

Parrilla generarParrilla(int slots, int aulas, int nTFGs, TFG *listTFG, Profesor *profesores, int numProf);
void generarPresentacion(int slots, int aulas, TFG *listTFG, int nTFGs, int TFG, Profesor *profesores, int numProf, Parrilla *parrilla, int *bitAulas, short** bitProf, bool *exito);
void generarTribunal(int slots, int slot, int aulas, TFG *listTFG, int nTFGs, int TFG, Profesor *profesores, int numProf, Parrilla *parrilla, int *bitAulas, short** bitProf, bool *exito, int *jurado);


