#include <stdio.h>
#include <string.h>

/*
Esta función realiza el backtracking para los TFGs

-slot: el slot para el TFG
-aulas: lista de aulas en que se realizan las presentaciones
-naulas: numero de aulas con TFG asignado a este slot
-listTFG: lista de TFGs
-profesores: lista de profesores
-presentaciones: lista de presentaciones generada
*/

generarPresentaciones(slot, aulas, naulas, listTFG, profesores, presentaciones) {
	if (!aulas[naulas]) return presentaciones; //si no queda aula por asignar, se devuelve el resultado
	for (TFG tfg : listTFG) { //por cada TFG
		for (Presentacion pres : presentaciones) {
			if (!strcmp(tfg.titulo, pres.tfg.titulo)) continue; //comprobamos que no tenga ya alguna presentación asignada
		}
		Profesor* trib = generarTribunal(tfg, slot, profesores, NULL, 0, false); //generamos un tribunal para la presentación
		if (prof) { //si hay tribunal posible
			presentaciones[naulas] = Presentacion(TFG, slot, aulas[naulas], trib) //creamos la presentación
			naulas++;
			resultado = generarPresentaciones(slot, aulas, naulas, listTFG, profesores, presentaciones); //backtracking
			if (resultado) return resultado; //Si el backtracking ha tenido exito
			else { //Si no
				naulas--;
				presentaciones[naulas] = NULL; //retiramos la presentacion y continuamos
			}
		}
	}
	return NULL;
}