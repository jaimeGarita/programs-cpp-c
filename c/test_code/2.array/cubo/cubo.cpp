

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

#define MAX 10

int main(){

int columna;
int fila;

	char array[MAX][MAX];

	for (int fila = 0; fila < MAX ; fila++){
		for (int columna = 0; columna < MAX ; columna++){
			if(fila == columna || fila == 0 || fila == MAX-1 || columna == 0 || columna == MAX-1){
				array[fila][columna] = '*';
				}

			else{
				array[fila][columna] = ' ';
			}
		}
		
	}

	for (int fila = 0; fila < MAX ; fila++){
		for (int columna = 0; columna < MAX ; columna++){
			printf("%c ", array[fila][columna]);	
		}

		printf("\n");

	}
	

	return EXIT_SUCCESS;

}
