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
	int *bitAulas;
	short** bitProf;
	bool exito;

	Presentacion **presentaciones;

public: 

	Parrilla();
	Parrilla(int convocatoria, int nslots, int naulas, int nTFGs, int nProf);
	
	void generarParrilla(TFG *listTFG, Profesor *profesores);
	void generarPresentacion(TFG *listTFG, int TFG, Profesor *profesores);
	void generarTribunal(int slot, TFG *listTFG, int TFG, Profesor *profesores, int *jurado);
	~Parrilla();

};

