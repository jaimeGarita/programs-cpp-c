#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>
#include <strings.h>

#include "algoritmo.h"

/******************************************
 * FICHERO SOLO PARA IMPRIMIR EN PANTALLA *
 ******************************************/
const char *inst[] = {
"REGLAS DEL JUEGO: ",
"1.- CADA JUGADOR ELIGE EL 1 O EL 2",
"2.- EN EL TURNO DE CADA JUGADOR, SE DEBE PONER UNA MARCA",
"3.- EL OBJETIVO ES PODER CREAR UNA LINEA VERTICAL U HORIZONTAL",
"4.- EL JUGADOR QUE HAGA LA LINEA GANA LA PARTIDA"
};

//FUNCION PARA AÑADIR TITULO Y BORRAR PANTALLA
void title(){

	system("clear");
	system("figlet 3 EN  RAYA");
	printf("\n");
	

	for (int i = 0; i<5; i++){
	printf("\n %s \n\n",inst[i]);
	}
	
}


//PREGUNTA SI QUIERES JUGAR
char preguntar_jugar(){
	char ask;

	printf("Pulsa (s) para jugar ");
	scanf("%c", &ask);
	
	/*switch(ask){
		case 's':
			return EXIT_SUCCESS;
		break;
		case 'n':	
			return EXIT_FAILURE;
		break;
	}*/
	return ask;
	
}
//IMPRIMIR EL TABLERO
void imprimir(int tab[N][N]){

	for (int i = 0; i<N; i++){
		printf("+---+---+---+");
		printf("\n");
			for(int j = 0; j<N; j++){
				printf("| %c ", tab[i][j]==0?' ': tab[i][j]+'0'); //OPERADOR CONDICIONAL
				
		}
		printf("|");
		printf("\n");
	}
	printf("+---+---+---+");
	printf("\n\n");

}

/*
 *	PREGUNTAR_USER(){
 *		scan *nombres1 y **nombre 2
 *	}
 *	
 */
//CONTADOR
void preguntar_user(unsigned *col, unsigned *fil, unsigned *t){
	
	*t = contar(*t);

	printf("Turno %i \n", *t);

	printf("Fila: ");
	scanf("%i", fil);

	printf("Columna: ");
	scanf("%i", col);
	
}
