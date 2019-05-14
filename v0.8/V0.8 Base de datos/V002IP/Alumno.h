
#pragma once
#include "Usuario.h"
#include "TFG.h"
#include "Grado.h"
#include "Presentacion.h"
//#include "Profesor.h"

class Alumno : public Usuario {
    
    TFG tfg;
    int grado;

public:

	Alumno(string nombre, string apellido, string email, Grado grado);
	~Alumno();
    
    int getGrado();
    void setGrado(Grado *grado);
	void setGrado(int grado);
    TFG getTfg();
    void modificarTFG(string,Presentacion,Profesor);
    
};

