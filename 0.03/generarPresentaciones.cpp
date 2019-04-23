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
-bitmap: bitmap de TFGs asignados
*/

generarPresentaciones(slot, aulas, naula, listTFG, nTFGs, profesores, presentaciones, bitmap) {
	if (aulas == naula) return presentaciones; //si no queda aula por asignar, se devuelve el resultado
	for (int i = 0; i < nTFGs; i++) { //por cada TFG
		if (bitmap[i]) continue; // si
		/*for (Presentacion pres : presentaciones) {
			if (!strcmp(listTFG[i].getTitulo(), pres.getTFG().getTitulo())) continue; //comprobamos que no tenga ya alguna presentación asignada
		}*/
		Profesor trib[3] = NULL;
		trib = generarTribunal(listTFG[i], slot, profesores, trib, 0, false); //generamos un tribunal para la presentación
		if (trib) { //si hay tribunal posible
			presentaciones[naula] = Presentacion(listTFG[i], slot, naula, trib); //creamos la presentación
			bitmap[i] = 1; //Ponemos el bit del TFG a 1 para decir que está asignado
			naula++; //Vamos al siguiente aula
			resultado = generarPresentaciones(slot, aulas, naula, listTFG, profesores, presentaciones); //backtracking
			if (resultado) { //Si el backtracking ha tenido exito
				return resultado; //Se devuelve la presentacion
			}
			else { //Si no ha funcionado el backtracking
				naula--; //Volvemos al aula anterior
				bitmap[i] = 0; //Volvemos a poner el bit del TFG a 0
				presentaciones[naula] = NULL; //retiramos la presentacion y continuamos
			}
		}
	}
	printf("Error en el backtracking de presentaciones.\n");
	return NULL;
}