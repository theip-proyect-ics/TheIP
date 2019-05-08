
#include "Alumno.h"
#include <string>

Alumno::Alumno(string nombre, string apellido, string email, Grado grado) : Usuario(nombre, apellido, email) {
	
	cout << "Hola Datos:" << nombre << apellido << email;
	cout << endl;
    this->grado = grado.getId();

	//tfg = new TFG(this);
}


Alumno::~Alumno() {
    
    
}

int Alumno::getGrado(){
    
    return grado;
}


void Alumno::setGrado(Grado *grado) {
    
    this->grado = grado->getId();
    
}

void Alumno::setGrado(int grado) {

	this->grado = grado;

}


TFG Alumno::getTfg() {
    
    return this->tfg;
}

void Alumno::modificarTFG(string titulo, Presentacion presentacion, Profesor tutor){
    
    tfg.setTitulo(titulo);
    tfg.modificarTutor(&tutor);
    
    
}
