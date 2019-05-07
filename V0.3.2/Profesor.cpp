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

void Profesor::anadirGrado(int id, int maxTFG)
{
	int* auxGr = (int*)malloc((nGrados + 1) * sizeof(int)); //reservamos memoria para tener un grado más
	int* auxTFG = (int*)malloc((nGrados + 1) * sizeof(int)); //y tambien para atualizar el numero de TFGs
	int * auxMax = (int*)malloc((nGrados + 1) * sizeof(int));   //y para el maximo de TFGs por grado
	for (int i = 0; i < nGrados; i++) {
		auxGr[i] = grados[i]; //copiamos los grados a la nueva variable
		auxTFG[i] = numTFGs[i]; //y tambien el numero de TFGs
		auxMax[i] = maxTFGs[i];  //y maximo de TFGs
	}
	auxGr[nGrados] = id; //metemos el nuevo grado, no deberia haber ningun TFG todavia
	auxTFG[nGrados] = maxTFG;  //y asignamos el maximo de TFGs
	free(grados);  //liberamos las variables anteriores
	free(numTFGs); //  ^^^^^
	free(maxTFGs);  //  ^^^^
	grados = auxGr; //sustituimos
	numTFGs = auxTFG; //^^^^ 
	maxTFGs = auxMax;
	nGrados++; //masmas
	return;
}

void Profesor::quitarGrado(int id)
{
	if (nGrados == 0) {
		printf("El profesor no está en ningún grado.\n");
		return;
	}

	int *auxGr = (int*)malloc((nGrados - 1) * sizeof(int));  //reservamos memoria para tener un grado más
	int *auxTFG = (int*)malloc((nGrados - 1) * sizeof(int));  //y tambien para atualizar el numero de TFGs
	int *auxMax = (int*)malloc((nGrados - 1) * sizeof(int));   //y para el maximo de TFGs por grado
	int j = 0;
	for (int i = 0; i < nGrados; i++) {
		if (grados[i] != id) {
			auxGr[j] = grados[i];  //copiamos los grados que no se borran a la nueva variable
			auxTFG[j] = numTFGs[i];  //y tambien el numero de TFGs
			auxMax[j] = maxTFGs[i];  //y maximo de TFGs
			j++;
		}
	}
	free(grados); //liberamos las variables anteriores
	free(numTFGs);
	free(maxTFGs);
	grados = auxGr; //sustituimos
	numTFGs = auxTFG;
	maxTFGs = auxMax;
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

int Profesor::getNumTFGs(int idGrado) {
	for (int i = 0; i < nGrados; i++) {
		if (idGrado == grados[i]) return numTFGs[i]; //Se busca el grado, se devuelve el numero de TFGs en ese grado
	}
	return -1; //Si el profesor no está en el grado, error
}

void Profesor::setNumTFGs(int* numTFGs)
{
	this->numTFGs = numTFGs;
}


void Profesor::setNumTFGs(int idGrado, int nTFGs) {
	for (int i = 0; i < nGrados; i++) {
		if (idGrado == grados[i]) { //Buscamos el grado al que añadir un TFG
			numTFGs[i] = nTFGs; //Si se encuentra uno, se actualiza el numero de TFGs
			return;
		}
	}
	printf("El profesor no está en este grado.\n");
	return;
}

void Profesor::anadirNumTFG(int idGrado) {
	for (int i = 0; i < nGrados; i++) {
		if (idGrado == grados[i]) { //Buscamos el grado al que añadir un TFG
			numTFGs[i] ++; //Si se encuentra uno, se añade un TFG más al contador
			return;
		}
	}
	printf("El profesor no está en este grado.\n");
	return;
}

void Profesor::quitarNumTFG(int idGrado) {
	for (int i = 0; i < nGrados; i++) {
		if (idGrado == grados[i]) { //Buscamos el grado al que añadir un TFG
			if (numTFGs[i] == 0)
				printf("El profesor no tiene ningún TFG para este grado.\n");
			else
				numTFGs[i] --; //Si se encuentra uno, se quita un TFG del contador

			return;
		}
	}
	printf("El profesor no está en este grado.\n");
	return;
}


void Profesor::setMaxTFGs(int* maxTFGs) {
	this->maxTFGs = maxTFGs;
}

void Profesor::setMaxTFGs(int idGrado, int maxTFG) {
	for (int i = 0; i < nGrados; i++) {
		if (idGrado == grados[i]) { //Buscamos el grado al que añadir un TFG
			maxTFGs[i] = maxTFG; //Si se encuentra uno, se actualiza el maximo de TFGs
			return;
		}
	}
	printf("El profesor no está en este grado.\n");
	return;
}

int* Profesor::getMaxTFGs() {
	return maxTFGs;
}


int Profesor::getMaxTFGs(int idGrado) {
	for (int i = 0; i < nGrados; i++) {
		if (idGrado == grados[i]) { //Buscamos el grado al que añadir un TFG
			return maxTFGs[i]; //Si se encuentra, se devuelve el maximo de TFGs
		}
	}
	printf("El profesor no está en este grado.\n");
	return;
}

