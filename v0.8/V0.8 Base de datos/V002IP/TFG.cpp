//
//  TFG.cpp
//  
//
//  Created by Rafa Del pozo on 02/04/2019.
// Actualizado por Álvaro Puente Lineas actualizadas: 6
//
#include "TFG.h"

TFG::TFG(string titulo, Profesor * tutor, Alumno *alumno, int grado)
{
	this->titulo = titulo;

	this->tutor = tutor;
	this->alumno = alumno;
	this->grado = grado;
}

TFG::TFG(Alumno *alumno)
{
	this->alumno = alumno;
}

TFG::TFG() {
}

TFG::~TFG()
{
}




void TFG::crearPresentacion(int dia, int aula, int slot, int convocatoria){

	presentacion.setDia(dia);
	presentacion.setAula(aula);
	presentacion.setSlot(slot);
	presentacion.setConvocatoria(convocatoria);
}
void TFG::eliminarPresentacion(){

	presentacion.eliminarJurado();
	presentacion.setDia(-1);
	presentacion.setAula(-1);
	presentacion.setSlot(-1);
	presentacion.setConvocatoria(-1);
}
Presentacion TFG::getPresentacion(){

	return presentacion;
}

void TFG::asignarTutor(Profesor *tutor){
	
	this->tutor = tutor;
}

/*
int TFG::getNtutores() {


}

void TFG::setNtutores(int) {


}
*/
void TFG::eliminarTutor(){
	tutor = NULL;
}
void TFG::modificarTutor(Profesor *tutor) {

	this->tutor = tutor;
}

Profesor* TFG::getTutor() {

	return tutor;
}

int TFG::getGrado()
{
	return grado;
}

void TFG::setGrado(Grado* id)
{
	grado = id->getId();
}

void TFG::setGrado(int id)
{
	grado = id;
}

//getes y setes
string TFG::getTitulo() {
	
	return titulo;
}

void TFG::setTitulo(string titulo) {

	this->titulo = titulo;
}

Alumno* TFG::getAlumno() {
	return alumno;
}
