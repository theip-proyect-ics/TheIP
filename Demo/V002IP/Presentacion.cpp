//
//  Presentacion.cpp
//  
//
//  Created by Rafa Del pozo on 02/04/2019.
//


#include "Presentacion.h"

Presentacion::Presentacion() {

	for (int i = 0; i < 4; i++) {
		jurado[i] = (Profesor*)malloc(sizeof(Profesor));
		jurado[i] = NULL;
	}
}
Presentacion::~Presentacion() {

	free(jurado);
}

void Presentacion::addJurado(Profesor *profesor) {
	for (int i = 0; i < 4; i++) {
		if (jurado[i] == NULL)
			jurado[i] = profesor;
	}
}

void Presentacion::quitarJurado(Profesor *profesor) {
	for (int i = 0; i < 4; i++) {
		if (jurado[i]->getEmail() == profesor->getEmail()) {
			jurado[i] = NULL;
		}
	}
}
Profesor *Presentacion::GetJurado(int num) {

	return jurado[num];
}

void Presentacion::eliminarJurado() {
	for (int i = 0; i < 4; i++)
		jurado[i] = NULL;
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