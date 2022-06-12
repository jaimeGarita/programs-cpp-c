#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define N 3

void pintar (unsigned t[N][N]){
    printf ("\n");
    for (unsigned f=0; f<N; f++) {
        printf ("\t");
        for (unsigned c=0; c<N-1; c++){
		printf("%c", t[f][c] == 0 ? ' ' : t[f][c]+'0');
		printf(" │  ");
	}
        printf ("\n");

        // Imprimir una linea horizontal
        printf ("\t");
        for (unsigned c=0; c<N-1; c++)
            printf ("──┼──");
        printf ("\n");
    }
    printf ("\n");
}

void fingir_datos(unsigned t[N][N]) {
    t[1][1] = t[0][0] = 1;

    t[1][2] = 2;
}

int main (int argc, char *argv[]) {

    unsigned tablero[N][N];

    /* Inicialización */
    bzero (tablero, sizeof(tablero));
    fingir_datos(tablero);

    pintar(tablero);

    return EXIT_SUCCESS;
}

