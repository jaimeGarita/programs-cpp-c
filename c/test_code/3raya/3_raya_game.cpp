

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <strings.h>

#define VACIO 0
#define DIMENSION 3
#define COORD 2

enum DATO { vacio, j1, j2 };
const char *representa[] = {
	" ",
	"⭕",
	"❌",
	
};

void imprimir(int tablero[DIMENSION][DIMENSION]){ 
	for(int col = 0; col<DIMENSION; col++){
		printf("----------");
		printf("\n");
			for(int fil=0; fil<DIMENSION;fil++){
				printf("|");
				printf("%c ", tablero[col][fil] == 0 ? ' ' : tablero[col][fil] + '0');
		
		}
		printf("|");
		printf("\n");
	}
		printf("----------");
	printf("\n");
}

int turnos( int t){ //CONDICIONAL PARA ELEGIR TURNOS
	return t == t%2 ? 1 : 2;
}

void fingir_datos(int tablero[DIMENSION][DIMENSION]){ //DATOS FALSOS PARA METERLOS EN EL 3 EN RAYA
	tablero[0][0] = tablero[0][0] = j1;
	tablero[1][0] = j1;
	tablero[2][0] = j1;

	
}

bool chck_hzt(int tablero[DIMENSION][DIMENSION], int fila, enum DATO jugador){ //FUNCION PARA COMPROBAR LOS 3 EN RAYA HORIZONTAL
	unsigned contador = 0U;

	if (contador >= DIMENSION){
		fprintf(stderr, "FILA ERROR: FATAL %i", fila);
	}

	for (int i = 0; i<DIMENSION; i++){
		if (tablero[fila][i] == jugador){
			contador ++;
		}
	}
	return contador == DIMENSION;
}

bool chck_vtc(int tablero[DIMENSION][DIMENSION], int columna, enum DATO jugador){ //FUNCION PARA COMPROBAR LOS 3 EN RAYA VERTICAL 
	unsigned contador = 0U;

	if(contador>=DIMENSION){
		fprintf(stderr, "FILA ERROR: FATAL %i", columna);
	}
	for (int i = 0; i<DIMENSION; i++){
	if(tablero[i][columna] == jugador){
		contador++;
		}	
	}
	return contador == DIMENSION;
}



void preguntar_turno(int t, int columna, int fila){ //PREGUNTAR LOS TURNOS "SOON"
	printf("Jugador %i, elige columna: ", turnos(t));
	scanf("%i", &columna);

	printf("Jugador %i, elige fila: ", turnos(t));
	scanf("%i", &fila);
}



int main(){
		
	int tablero[DIMENSION][DIMENSION];
	bzero (tablero, sizeof(tablero));
	fingir_datos(tablero);
	//IMPRIMIR LAS FUNCIONES VERTICALES Y HORIZONTALES
	for (unsigned f = 0; f<DIMENSION; f++){
		if(chck_hzt(tablero, f, j1)){
			printf("Tres en ralla en la linea %i! \n", f);
	}else{
		printf("Fila %u libre \n", f);
	}
	}
	for (unsigned i = 0 ; i<DIMENSION; i++){
		if(chck_vtc(tablero,i,j1)){
			printf("Tres en ralla en la columna 0! \n");
	}else{
				printf("Columna %u libre \n", i);
			}
		}
	
	imprimir(tablero);
	return EXIT_SUCCESS;

}
