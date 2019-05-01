
#include "Profesor.h"
//#include "Usuario.h"


Profesor::Profesor(string nombre, string apellido, string email) : Usuario(nombre, apellido, email)
{
	
	nGrados = 0;
	numTFGs = 0;
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
/*void Profesor::modificarDisponibilidad(bool disponible, int dia, int slot)
{
	disponibilidad.tabla[dia][slot] = disponible;
}*/
Disponibilidad Profesor::getDisponibilidad()
{
	return disponibilidad;
}

int* Profesor::getGrados() 
{
	return grados;
}

int Profesor::getNGrados()
{
	return nGrados;
}

void Profesor::anadirGrado(int id)
{
	int* auxGr = (int**)malloc((nGrados+1) * sizeof(int*)); //reservamos memoria para tener un grado más
	int* auxTFG = (int**)malloc((nGrados + 1) * sizeof(int*)); //y tambien para atualizar el numero de TFGs
	for (int i = 0; i < nGrados; i++) { 
		auxGr[i] = grados[i]; //copiamos los grados a la nueva variable
		auxTFG[i] = numTFGs[i]; //y tambien el numero de TFGs
	}
	auxGr[nGrados] = id; //metemos el nuevo grado, no deberia haber ningun TFG todavia
	free(grados);  //liberamos las variables anteriores
	free(numTFGs); //  ^^^^^
	grados = auxGr; //sustituimos
	numTFGs = auxTFG; //^^^^ 
	nGrados++; //masmas
	return;
}

void Profesor::quitarGrado(int id)
{
	int* auxGr = (int**)malloc((nGrados - 1) * sizeof(int*));  //reservamos memoria para tener un grado más
	int *auxTFG = (int**)malloc((nGrados - 1) * sizeof(int*));  //y tambien para atualizar el numero de TFGs
	for (int i = 0; i < nGrados; i++) {
		if (grados[i] != i){
			auxGr[i] = grados[i];  //copiamos los grados que no se borran a la nueva variable
			auxTFG[i] = numTFGs[i];  //y tambien el numero de TFGs
		}
	}
	free(grados); //liberamos las variables anteriores
	free(numTFGs);
	grados = auxGr; //sustituimos
	numTFGs = auxTFG;
	nGrados--;  //menosmenos
	return;
}
//porque está esta función aqui si la relación con la clase Presentación es diferente (ver diagrama de clases)
/*
Presentacion Profesor::getPresentaciones()
{
	return Presentacion; //watafak man
}*/

bool Profesor::getDoctorado()
{
	return doctorado;
}

void Profesor::setDoctorado(bool doctor)
{
	doctorado = doctor;
}

int* Profesor::getNumTFGs()
{
	return numTFGs;
}

void Profesor::setNumTFGs(int* numTFGs)
{
	numTFGs = this->numTFGs;
}

