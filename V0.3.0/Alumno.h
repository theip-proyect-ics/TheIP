
#pragma once
#include "Usuario.h"
#include "TFG.h"
#include "Grado.h"
//#include "Profesor.h"
class Alumno : protected Usuario {
    
    TFG tfg;
    Grado *grado;
public:

	Alumno(string nombre, string apellido, string email, Grado grado);
	~Alumno();
    
    Grado *getGrado();
	//void setNombre(string nombrer);
	//void setApellido(string apellidor);
	//void setEmail(string emailr);
    void ModificarGrado(Grado *grado);
    TFG getTfg();
    void modificarTFG(string,Presentacion,Profesor);
    
};

