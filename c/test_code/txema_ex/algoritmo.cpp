#include <stdio.h>
#include <stdlib.h>

#define N 3
#define OUT_OF_BOUNDS N

enum TDato {vacio, j1, j2};

bool check_hztal(unsigned t[N][N], unsigned fila, enum TDato jugador) {
    unsigned contador = 0U;

    if (fila >= N ){
        fprintf(stderr, "check_hztal: Invalid row %u.\n", fila);
        exit( OUT_OF_BOUNDS );
    }

    for (unsigned i=0; i<N; i++)
        if (t[fila][i] == jugador)
            contador++;

    return contador == N;
}

bool check_vtcal(unsigned t[N][N], unsigned col, enum TDato jugador) {
    unsigned contador = 0U;

    if (col >= N ){
        fprintf(stderr, "check_hztal: Invalid col %u.\n", col);
        exit( OUT_OF_BOUNDS );
    }

    for (unsigned i=0; i<N; i++)
        if (t[i][col] == jugador)
            contador++;

    return contador == N;
}

