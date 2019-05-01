//
//  Presentacion.cpp
//  
//
//  Created by Rafa Del pozo on 02/04/2019.
//


#include "Presentacion.h"

Presentacion::Presentacion() {

}
Presentacion::~Presentacion() {

}

int Presentacion::addJurado(Profesor profesor) {
	return 0;
}
int Presentacion::quitarJurado(Profesor profesor) {
	return 0;
}
string Presentacion::GetJurados(){
	return 0;
}

//getes y setes
int Presentacion::getDia() {
	return dia;
}
void Presentacion::setDia(int dia) {
	this->dia = dia;

}
int Presentacion::getAula() {
	return aula;
}
void Presentacion::setAula(int aula) {
	this->aula = aula;

}
int Presentacion::getSlot() {
	return slot;
}
void Presentacion::setSlot(int slot) {
	this->slot = slot;

}
int Presentacion::getConvocatoria() {
	return convocatoria;
}
void Presentacion::setConvocatoria(int convocatoria) {
	
	this->convocatoria = convocatoria;

}
