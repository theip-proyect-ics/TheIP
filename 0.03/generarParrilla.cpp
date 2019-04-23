#include <stdio.h>

/*
Esta funci�n realiza el backtracking para los slots y las aulas, generando la parrilla final

-slots: Cantidad de slots a generar (3 slots en 5 d�as = 25 slots)
-aulas: n�mero de aulas por asignar a cada slot
-nTFGs: n�mero total de TFGs por asignar
-listTFG: lista de TFGs
-profesores: lista de profesores
*/

generarParrilla(slots, aulas, nTFGs, listTFG, profesores) {
	int auxTFGs = 0; // cantidad de TFGs asignados
	short bitmap[nTFGs] = NULL; // bitmap de TFGs asignados
	for (int i = 0; i < nTFGs; i++) {
		bitmap[i] = 0; // Si el bit est� a 0, no est� asignado. Cuando un TFG se asigne, se pondr� a 1
	}
	Presentaci�n parrilla[nTFGs] = NULL;  //se crea una parrilla vac�a
	Presentacion presentaciones[aulas] = NULL; //y un array de presentaciones para cada aula
	for (int i = 0; i < slots; i++) {
		presentaciones = generarPresentaciones(i, aulas, 0, listTFG, profesores, presentaciones, bitmap); //Para cada slot, generamos sus presentaciones
		if (!presentaciones) { //Si es NULL, algo ha ido mal
			printf("Error en el backtracking.\n");
			break;
		}
		else { //Si no, se a�ade a la parrilla
			for (int i = 0; i < aulas; i++) {
				if (presentaciones[i] != NULL) {
					parrilla[auxTFGs] = presentaciones[i];
					auxTFGs++;
				}
			}
		}
	}
	return parrilla; //Se devuelve la parrilla de presentaciones
}