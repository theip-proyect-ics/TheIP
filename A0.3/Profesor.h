#include "Usuario.h"
#pragma once

#include "Disponibilidad.h"
/* ESTAS CLASES No son necesarias
#include "Presentacion.h"
#include "TFG.cpp"*/
#include "Grado.h"
#include <stdio.h>
#include <assert.h>

#define MAXTABLA 100

class Profesor : protected Usuario {

	bool doctorado;
	int numTFGs;
    Disponibilidad disponibilidad;
	//string nombre;
	//string apellidos;
	//string email;
	int tabla[MAXTABLA][MAXTABLA];
	Grado **grados;
public:
	Profesor(string nombre, string apellido, string email);

	//Profesor();
	~Profesor();
    
	

	void crearDisponibilidad(int dia, int slot);
    void eliminarDisponibilidad(int dia, int slot);
   // void modificarDisponibilidad(Disponibilidad disponibilidad, int dia, int slot);
   // Disponibilidad getDisponibilidad(int dia, int slot);
	Disponibilidad getDisponibilidad();
	//Grado getGrados();
    void modificarGrados(char nombre);
    //porque está esta función aqui si la relación con la clase Presentación es diferente (ver diagrama de clases)
    //Presentacion getPresentaciones();
    bool getDoctorado();
    void setDoctorado(bool doctor);
    int getNumTFGs();
    void setNumTFGs(int numTFGs);
};

