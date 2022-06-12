

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>
#include <strings.h>

#include "algoritmo.h"

int main(){
	/****************************
	 * DECLARACION DE VARIABLES *
	 ****************************/	
	int tab[N][N];
	unsigned col;
	unsigned fil;
	unsigned t = 0, i=0;
	
	title();
	//CONDICIONAL PARA PARAR EL JUEGO
	if(preguntar_jugar() != 's'){

		return EXIT_FAILURE;
	}

	//FUNCION PARA RELLENAR EL ARRAY DE 0
	bzero(tab, sizeof(tab));

	do{
	/***********************
	 * LLAMADA A FUNCIONES *
	 ***********************/
	imprimir(tab);
	
	preguntar_user(&col, &fil, &t);
	turno(tab, col, fil, t);

	/*****************
	 * COMPROBACION  *
	 *****************/

	for(int i = 0; i<N; i++){
		if(chck_hztl(tab,i, j1)){
			printf("TRES EN RAYA!!");
			printf("\n");
		}else{
			printf("fila %i libre", i);
			printf("\n");
		}
	}

	for(int j = 0; j<N; j++){
		if(chck_vetcl(tab, j, j1)){
			printf("\n");
			printf("TRES EN RAYA EN LA COLUMNA %i", j);
		}else{
			printf("Columna %i libre", j);
		}
		printf("\n");
	}
	i++;
	}while(i<9);
		return EXIT_SUCCESS;

}
