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

	int valorAulas;
	int valorDias;

	Presentacion **presAulas;
	Presentacion **presDias;
	Presentacion **presentaciones;

public: 

	Parrilla();
	Parrilla(int convocatoria, int nslots, int naulas, int nTFGs, int nProf);
	
	void generarParrilla(TFG *listTFG, Profesor *profesores);
	void generarPresentacion(TFG *listTFG, const int &TFG, Profesor *profesores);
	void generarTribunal(const int &slot, TFG *listTFG, const int &TFG, Profesor *profesores, int *jurado);

	int valorarParrilla();

	~Parrilla();

};

