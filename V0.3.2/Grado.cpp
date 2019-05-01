//
//  Grado.cpp
//  
//
//  Created by Rafa Del pozo on 02/04/2019.
//

#include "Grado.h"

Grado::Grado(string nombre) {
	
	this->nombre = nombre;
	this->id = nGrados;
	this->nGrados++;
}

Grado::~Grado() {

}



string Grado::getNombre() {
	return nombre;
}
void Grado::setNombre(string nombre) {
	this->nombre = nombre;
}
int Grado::getId() {
	return id;
}