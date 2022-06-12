

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define DIMENSION 3
#define VACIO 0

int main(){
	

	int tablero[DIMENSION][DIMENSION];

	for (int col = 0 ; col<DIMENSION ; col++){
		for(int f= 0; f<DIMENSION; f++){
			tablero[f][col]=VACIO;
		}

	}

	for(int c=0; c<DIMENSION; c++){
		for(int fil=0; fil<DIMENSION;fil++){
			printf("%i", tablero[fil][c]);
		}
	}
	
	return EXIT_SUCCESS;

}
