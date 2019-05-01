#pragma once
#include "Usuario.h"
#include "Disponibilidad.h"
#include "Grado.h"
#include "Presentacion.h"
#include "TFG.hpp"
#include <assert.h>

class Profesor : protected Usuario {

	bool doctorado;
	int numTFGs;
    Disponibilidad disponibilidad;
	Grado **grados;
public:
	Profesor();
	~Profesor();
    
    void crearDisponibilidad(int dia, int slot);
    void eliminarDisponibilidad(int dia, int slot);
    void modificarDisponibilidad(Disponibilidad disponibilidad, int dia, int slot);
    Disponibilidad getDisponibilidad(int dia, int slot);
    Grado getGrados();
    void modificarGrados(char nombre);
    //porque está esta función aqui si la relación con la clase Presentación es diferente (ver diagrama de clases)
    Presentacion getPresentaciones();
    bool getDoctorado();
    void setDoctorado(bool doctor);
    int getNumTFGs();
    void setNumTFGs(int numTFGs);
};

