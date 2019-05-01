
#include "Alumno.h"
#include <string>

Alumno::Alumno(string nombre, string apellido, string email, Grado grado) : Usuario(nombre, apellido, email) {
	
	cout << "Hola Datos:" << nombre << apellido << email;
	cout << endl;
    this->grado = &grado;
}


Alumno::~Alumno() {
    
    
}

Grado *Alumno::getGrado(){
    
    return grado;
}
/*
void Alumno::setNombre(string nombrer)
{
	usuario.nombre = nombrer;
}

void Alumno::setApellido(string apellidor)
{
}

void Alumno::setEmail(string emailr)
{
}
*/

void Alumno::ModificarGrado(Grado *grado) {
    
    this->grado = grado;
    
}


TFG Alumno::getTfg() {
    
    return this->tfg;
}

void Alumno::modificarTFG(string titulo,Presentacion presentacion,Profesor tutor){
    
    tfg.setTitulo(titulo);
    tfg.modificarTutor(&tutor);
    
    
}
