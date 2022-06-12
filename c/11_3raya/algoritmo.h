#ifndef __ALGORITMO_H__ //SIRVE PARA QUE NO VUELVA A LLAMAR A LAS CABECERAS DE NUEVO
#define __ALGORITMO_H__

#include "cabecera.h"

#ifdef __cplusplus //EVITAR EL MANGIN
extern "C"{
#endif

/***************************
 * DECLARACION DE VARIALES *
 ***************************/
void imprimir(int tab[N][N]);
bool chck_hztl(int tab[N][N], unsigned fil, enum DATO jugador);
bool chck_vetcl(int tab[N][N], unsigned fil, enum DATO jugador);
void title();
void preguntar_user(unsigned *col, unsigned *fil, unsigned *t);
int contar(unsigned t);
void turno(int tab[N][N], unsigned col, unsigned fil, unsigned t);
char preguntar_jugar();
#ifdef __cplusplus
}
#endif
#endif

