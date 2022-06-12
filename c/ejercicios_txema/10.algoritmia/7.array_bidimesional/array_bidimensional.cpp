

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

int main(){
	
	//PROCESO ALGORITMICO CREADO POR JAIME Y ARTURO

	int a[5][10];
	int fila;
	int columna;
	

	for (fila=0; fila<5 ; fila++){ //DESDE FILA = 0 HASTA FILA ES MENOR QUE 5 INCREMENTA
		for(columna=0; columna<10; columna++){ //DESDE COLUMNA ES = 0 HASTA COLUMNA = 10 ME INCREMENTA COLUMNA
				if(fila== 0 && columna != 9){ //SI ESTOY EN LA FILA 0 HASTA LA 8
					a[fila][columna]=columna; //PARA PONER NUMEROS NATURALES DEL 1 AL 10
					printf("%i ", a[fila][columna]); //IMPRIME NUMEROS NATURALES
				}
				if(fila != 0 && columna !=9){ //SI LA FILA NO ES IGUAL A 0 Y LA COLUMNA NO ES IGUAL A 9
					a[fila][columna] = a[fila-1][columna+1]+a[fila-1][columna]; //ALGORITMO QUE COGE LA FILA DE ARRIBA Y LA DE LA DERECHA
					printf("%i ", a[fila][columna]); //IMPRIME
				}
				if(columna == 9){ // IF PARA QUE LA ULTIMA COLUMNA SEA SIEMPRE LA MISMA
					a[fila][columna] = columna; //INDICAMOS QUE VA A SER LA COLUMNA
					printf("%i \n", a[fila][columna]); //IMPRIMIMOS

				}
			 }
	}	

	return EXIT_SUCCESS;

}
