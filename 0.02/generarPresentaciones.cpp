#include <stdio.h>
#include <string.h>

/*
Esta función realiza el backtracking para los TFGs

-slot: el slot para el TFG
-aulas: número de aulas por asignar a este slot
-naula: numero de aulas con TFG asignado a este slot
-listTFG: lista de TFGs
-profesores: lista de profesores
-presentaciones: lista de presentaciones generada
*/

generarPresentaciones(slot, aulas, naula, listTFG, profesores, presentaciones) {
	if (aulas == naula) return presentaciones; //si no queda aula por asignar, se devuelve el resultado
	for (TFG tfg : listTFG) { //por cada TFG
		for (Presentacion pres : presentaciones) {
			if (!strcmp(tfg.titulo, pres.tfg.titulo)) continue; //comprobamos que no tenga ya alguna presentación asignada
		}
		Profesor* trib = generarTribunal(tfg, slot, profesores, NULL, 0, false); //generamos un tribunal para la presentación
		if (prof) { //si hay tribunal posible
			presentaciones[naula] = Presentacion(TFG, slot, naula, trib); //creamos la presentación
			naula++;
			resultado = generarPresentaciones(slot, aulas, naula, listTFG, profesores, presentaciones); //backtracking
			if (resultado) return resultado; //Si el backtracking ha tenido exito
			else { //Si no
				naula--;
				presentaciones[naula] = NULL; //retiramos la presentacion y continuamos
			}
		}
	}
	printf("Error en el backtracking de presentaciones.\n");
	return NULL;
}