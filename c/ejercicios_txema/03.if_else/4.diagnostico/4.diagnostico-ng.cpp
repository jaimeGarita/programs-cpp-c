

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <ctype.h>
const char *preguntas[]{ //GUARDAR EN UNA ARRAY DE TIPO CONSTANTE LAS PRIMERAS LETRAS DE LA PALABRA
	"tos", //PRIMER BYTE
	"maulla", //SEGUNDO BYTE
	NULL // TERCER BYTE

};

const char *solucion[]{ //GUARDAMOS EN OTRA ARRAY DE TIPO CONSTANTE LAS SOLUCIONES
	//SON BYTES QUE VAMOS A ACTIVAR SEGUN TENGAMOS LAS RESPUESTAS
	"Humano Sano", // 00
	"Tos ferina",  // 01
	"Gato",	       // 10
	"Tos felina"   // 11

};

bool preguntar (const char *frase){
	char respuesta;
	__fpurge(stdin);	
	printf("%s (s/N)", frase); //VAMOS A IMPRIMIR LAS PREGUNTAR A TRAVES DE ESTE PRINTF
	scanf("%c", &respuesta); //COGEMOS LA RESPUESTA
	
	return tolower (respuesta) == 's';
}	
int main(){
	int i = 0;
	int bit_n = 1;
	unsigned estado = 0;

	for (i=0 ,bit_n=1 ; preguntas[i] !=NULL; bit_n <<= 1, i++){
		//DESDE I= 0 HASTA BIT_N 1 HASTA PREGUNTAS NO SEA = A NULL MUEVE UN BIT A LA IZQUIERDA E INCREMENTA I
	if(preguntar(preguntas[i])){
		
		estado |= bit_n ;  //HACE UN OR A ESTADO EL BIT_N

		}
	}
	printf("%s \n", solucion[estado]);
	return EXIT_SUCCESS;

}
