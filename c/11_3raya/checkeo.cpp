

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

#include "algoritmo.h"

unsigned contador = 0U;

bool chck_hztl(int tab[N][N], unsigned fil, enum DATO jugador){

	int contador = 0U;

	for(int i = 0; i<N ; i++){
		if(tab[fil][i] == jugador){
			contador++;
		}
	}
		return contador == N;
	
	
}

bool chck_vetcl(int tab[N][N], unsigned col, enum DATO jugador){
	int contador = 0U;
	
	for (int i = 0; i<N; i++){
		if(tab[i][col] == jugador){
			contador++;
		}

	}
	return contador ==  N;
}	
