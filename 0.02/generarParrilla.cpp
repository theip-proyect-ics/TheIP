#include <stdio.h>

/*
Esta funci�n realiza el backtracking para los slots y las aulas, generando la parrilla final

-slots: Cantidad de slots a generar (3 slots en 5 d�as = 25 slots)
-aulas: n�mero de aulas por asignar a cada slot
-listTFG: lista de TFGs
-profesores: lista de profesores
*/

generarParrilla(slots, aulas, listTFG, profesores) {
	Presentaci�n parrilla[slots][aulas] = NULL;  //se crea una parrilla vac�a
	Presentacion presentaciones[aulas] = NULL; //y un array de presentaciones para cada aula
	for (int i = 0; i < slots; i++) {
		presentaciones = generarPresentaciones(i, aulas, 0, listTFG, profesores, presentaciones); //Para cada slot, generamos sus presentaciones
		if (!presentaciones) { //Si es NULL, algo ha ido mal
			printf("Error en el backtracking.\n");
			break;
		}
		else { //Si no, se a�ade a la parrilla
			parrilla[i] = presentaciones;
		}
	}
	return parrilla; //Se devuelve la parrilla de presentaciones
}