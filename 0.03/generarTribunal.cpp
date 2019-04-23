#include <stdio.h>
#include <string.h>

/*
Esta función busca 3 profesores apropiados para un TFG y un slot dados.

-TFG: el TFG de la presentación
-Slot: el slot para el TFG
-profesores: lista de profesores
-Tribunal: profesores seleccionados hasta ahora
-nprof: número de profesores seleccionados hasta ahora
-doctor: si hay un doctor en el tribunal, True, si no es False
-bitmap: PUNTERO a bitmap
*/

generarTribunal(TFG, slot, profesores, tribunal, nprof, doctor, bitmap){
	if (nprof == 3) return tribunal; // si hay 3 profesores seleccionados, hemos acabado
	for(Profesor profe: profesores){ //por cada profesor
		if(!strcmp(TFG.getGrado(), profe.getGrado())) continue; //Comparamos si el profesor está en el grado
		
		bool flag = false //Flag para comprobaciones
		for (int hora: profe.disponibilidad.getSlot()){ //Comprobamos si ese slot está disponible para el profesor
			if (slot == hora){
				flag = true; //Si el slot está disponible, el flag está a True
				break;
			}
		}
		if(!flag) continue; //Si el profesor no tenía el slot disponible, pasamos a otro
		for(int i = 0; i < nprof; i++){
			if (!strcmp(profe.getNombre(), tribunal[i].getNombre())){ //Comprobamos que no hayamos cogido ya el profesor
				flag = false; //Si está ya en el tribunal, ponemos la flag a False
				break;
			}
		}
		if (!flag) continue; //Si la flag está a False, probamos otro profesor
		
		if (!doctor && !profe.doctor) continue; //Si el profesor no es doctor, y no hay uno escogido todavía, pasamos
		doctor = true;
		tribunal[nprof] = profe; //Añadimos el profesor al tribunal
		nprof ++;
		Profesor* trib = generarTribunal(TFG, slot, Profesores, tribunal, nprof, doctor); //Recursivo
		if (!trib){ //Si el backtracking ha fallado
			nprof --;
			if (nprof == 0) doctor = false; //si era el primer profesor asignado, era el doctor
			tribunal[nprof] = NULL;
			continue;
		}
		else {
			return trib; //si no ha fallado, devuelve el resultado
		}
	}
	printf("Error en el backtracking de tribunal.\n");
	return NULL; //Si ha pasado por todos los profesores, el algoritmo ha fallado y devuelve NULL
}