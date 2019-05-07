//
//  Disponibilidad.cpp
//  
//
//  Created by Rafa Del pozo on 02/04/2019.
//

#include "Disponibilidad.h"

Disponibilidad::Disponibilidad(){
    
	 tabla = (bool**)malloc(DIAS * sizeof(bool*));

	 for (int i = 0; i < SLOTS; i++) {
		 tabla[i] = (bool *)malloc(SLOTS * sizeof(bool));
	 }
}

Disponibilidad::~Disponibilidad(){
    
	delete[] tabla;
}

//getes y setes



bool Disponibilidad::getDisponibilidad(int dia, int slot){
    
	return tabla[dia][slot];
}

void Disponibilidad::setDisponibilidad(int dia, int slot, bool valor){

	tabla[dia][slot] = valor;

}

char **Disponibilidad::getTabla(){

	return tabla;
}
