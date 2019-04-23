#include <stdio.h>

/*
Esta función realiza el backtracking para los slots y las aulas, generando la parrilla final

-slots: Cantidad de slots a generar (3 slots en 5 días = 25 slots)
-aulas: número de aulas por asignar a cada slot
-nTFGs: número total de TFGs por asignar
-listTFG: lista de TFGs
-profesores: lista de profesores
*/

generarParrilla(slots, aulas, nTFGs, listTFG, profesores) {
	int auxTFGs = 0; // cantidad de TFGs asignados
	short bitmap[nTFGs] = NULL; // bitmap de TFGs asignados
	for (int i = 0; i < nTFGs; i++) {
		bitmap[i] = 0; // Si el bit está a 0, no está asignado. Cuando un TFG se asigne, se pondrá a 1
	}
	Presentación parrilla[nTFGs] = NULL;  //se crea una parrilla vacía
	Presentacion presentaciones[aulas] = NULL; //y un array de presentaciones para cada aula
	for (int i = 0; i < slots; i++) {
		presentaciones = generarPresentaciones(i, aulas, 0, listTFG, profesores, presentaciones, bitmap); //Para cada slot, generamos sus presentaciones
		if (!presentaciones) { //Si es NULL, algo ha ido mal
			printf("Error en el backtracking.\n");
			break;
		}
		else { //Si no, se añade a la parrilla
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