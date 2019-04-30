//
//  TFG.hpp
//  
//
//  Created by Rafa Del pozo on 02/04/2019.
//

#pragma once
#include <stdio.h>
#include "Usuario.h"
#include "Grado.h"
#include "Presentacion.h"
#include "Profesor.h"
//#include "Alumno.h"


class TFG {
    
    string titulo;
    Presentacion presentacion;
    Profesor *tutor;
	Grado grado;
	//Alumno *alumno;
	//int nTutores;
    
public:
    
    TFG(string titulo,Profesor *tutor);
	TFG();
    ~TFG();
    void crearPresentacion(int dia, int aula, int slot, int convocatoria);
    void eliminarPresentacion();
    Presentacion getPresentacion();
    void asignarTutor(Profesor*);
    void eliminarTutor();
    void modificarTutor(Profesor*);
    Profesor *getTutor();
	int getGrado();
    
    //getes y setes
    string getTitulo();
    void setTitulo(string titulo);
	/*
	int getNtutores();
	void setNtutores(int);
	*/
};
