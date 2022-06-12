// tres-v5: Comprobar el 4 en raya vertical

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>


#define N 3  /* BOARD SIZE */

/* ERRORS */
#define OUT_OF_BOUNDS 2

enum TDato { vacio, j1, j2 };
const char *representa[] = {
    "  ",
    "⭕", // 2B55
    "❌", // 274C
};

void pintar (unsigned t[N][N]){
    printf ("\n");
    for (unsigned f=0; f<N; f++) {
        printf ("\t");
        for (unsigned c=0; c<N; c++){
            printf (" %s ", representa[t[f][c]]);
            if (c < N-1)
                printf ("│");
        }
        printf ("\n");

        // Imprimir una linea horizontal
        printf ("\t");
        if (f < N-1)
            for (unsigned c=0; c<N; c++) {
                printf ("────");
                if (c < N-1)
                    printf ("┼");
            }
        printf ("\n");
    }

    printf ("\n");
}
void pintar (unsigned t[N][N]);
void fingir_datos(unsigned t[N][N]);
bool check_hztal(unsigned t[N][N], unsigned fila, enum TDato jugador);
bool check_vtcal(unsigned t[N][N], unsigned col, enum TDato jugador);


void fingir_datos(unsigned t[N][N]) {
    t[2][0] = t[1][0] = t[0][0] = j1;

    t[1][2] = j2;
}


int main (int argc, char *argv[]) {

    unsigned tablero[N][N];

    /* Inicialización */
    bzero (tablero, sizeof(tablero));
    fingir_datos(tablero);

    for (unsigned c=0U; c<N; c++)
        if (check_vtcal (tablero, c, j1))
            printf ("Tres en raya en la columna: %u!\n", c);
        else
            printf ("Columna %u: Libre.\n", c);

    pintar(tablero);

    return EXIT_SUCCESS;
}

