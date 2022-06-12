

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

#define MAX 10

int main(){
	char laberinto[MAX][MAX];	
	srand(time(NULL));

	for(int lado = 0; lado<MAX; lado++){
		for(int columna = 0; columna<MAX; columna++){
			if(lado>0 && lado<(MAX-1) && columna>0 && columna<(MAX-1) ) && (rand()%5<3) || (lado ==(MAX-2)&& columna == (MAX-1) ){
				laberinto[lado][columna] = ' ';
			
			}else{

				laberinto[lado][columna] = '#';
			}
		}
	}
	return EXIT_SUCCESS;

}
