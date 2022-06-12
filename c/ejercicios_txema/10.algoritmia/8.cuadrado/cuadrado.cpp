

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

int main(){

	//PROCESO ALGORITMICO CREADO POR ANDRES, ROY, ARTURO Y JAIME

	int num;
	int lados;
	int columnas;

	printf("Introduce el largo de los lados de un cuadrado: ");
	scanf("%i", &num); //GUARDAMOS LO QUE IMPRIMA EL USUARIO EN LA DIRECCION DE MEMORIA DE NUM

	for(lados = 1; lados <= num ; lados ++){ // PARA IMPRIMIR LOS LADOS DEL ASTERISCO
		for (columnas = 1; columnas <= num ; columnas++){ //PARA IMPRIMIR LAS COLUMNAS
			if(lados == 1 || lados == num || columnas == 1 || columnas == num){ //EL LADO ES 1, LA COLUMNA ES LO MISMO QUE LOS LADOS
				//DEL NUM Y LO MISMO CON LAS COLUMNAS
			printf("*"); //IMPRIME *
			}
		else{ //SI NO
			printf(" "); //IMPRIME UN ESPACIO
			}
		}
		printf("\n"); //IMPRIME UN SALTO DE LINEA
	}

	return EXIT_SUCCESS;

}
