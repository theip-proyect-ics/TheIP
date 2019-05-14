//
//  TFG.hpp
//  
//
//  Created by Rafa Del pozo on 02/04/2019.
//

#pragma once
#include <stdio.h>
#include "Grado.h"
#include "Presentacion.h"
#include "Profesor.h"
//#include "Alumno.h" 		// NO INCLUIR -> Bucle no bueno :(

class Alumno;

class TFG {
    
    string titulo;
    Presentacion presentacion;
    Profesor *tutor;
	int grado;
	Alumno *alumno;
	//int nTutores;
    
public:
    
    TFG(string titulo,Profesor *tutor, Alumno *alumno, int grado);
	TFG(Alumno *alumno);
	TFG();
    ~TFG();
    void crearPresentacion(int dia, int aula, int slot, int convocatoria);
    void eliminarPresentacion();
    Presentacion getPresentacion();
    void asignarTutor(Profesor*);
    void eliminarTutor();
    void modificarTutor(Profesor*);
    Profesor* getTutor();

	int getGrado();
	void setGrado(int id);
	void setGrado(Grado* id);
    
    //getes y setes
    string getTitulo();
    void setTitulo(string titulo);
	Alumno* getAlumno();
	/*
	int getNtutores();
	void setNtutores(int);
	*/
};
