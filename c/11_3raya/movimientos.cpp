
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>
#include <strings.h>

#include "algoritmo.h"
//OPERADOR CONDICIONAL PARA JUGADOR 1 O JUGADOR 2
int contar(unsigned t){
	return t%2==0 ? 1 : 2;
}

//FUNCION PARA AÑADIR LOS NUMEROS EN EL TABLERO
void turno(int tab[N][N], unsigned col, unsigned fil, unsigned t){
	
	if(tab[fil-1][col-1] == 0){
		if(t==1){
			tab[fil-1][col-1] = j1;	
		}else
			tab[fil-1][col-1] = j2;
	}
}
