#include "Profesor.h"

Profesor::Profesor()
{

}

Profesor::~Profesor()
{

}

void Profesor::crearDisponibilidad(int dia, int slot)
{
	tabla[dia][slot] = 1;
}

void Profesor::eliminarDisponibilidad(int dia, int slot)
{
	tabla[dia][slot] = 0;
}
void Profesor::modificarDisponibilidad(bool disponible, int dia, int slot)
{
	disponibilidad.tabla[dia][slot] = disponible;
}
Disponibilidad Profesor::getDisponibilidad()
{
	return disponibilidad;
}
Grado Profesor::getGrados() //Esto que devuelve�?
{
	return grados;
}
void Profesor::modificarGrados(char nombre)
{

}
//porque est� esta funci�n aqui si la relaci�n con la clase Presentaci�n es diferente (ver diagrama de clases)
Presentacion Profesor::getPresentaciones()
{
	return Presentacion; //watafak man
}

bool Profesor::getDoctorado()
{
	return doctorado;
}

void Profesor::setDoctorado(bool doctor)
{
	doctorado = doctor;
}

int Profesor::getNumTFGs()
{
	return numTFGs;
}

void Profesor::setNumTFGs(int numTFGs)
{
	numTFGs = this->numTFGs;
}