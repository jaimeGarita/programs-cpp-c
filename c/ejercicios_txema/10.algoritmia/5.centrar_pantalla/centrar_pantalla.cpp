

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>
#define MAX 30

void locatexy(int x, int y){ //FUNCION LOCALIZACION X E Y

	printf("%c[%i;%if",27,y,x); //MARCAR LAS COORDENADAS PARA DESPUES PODER IMPRIMIRLAS EL NUMERO 27 INDICA ESCAPE EN ASCII
	
	}		


int main(){
	char nombre[MAX]; //DECLARAMOS VARIABLE NOMBRE
	
	printf("Nombre: "); //IMPRIMIMOS NOMBRE
	fgets(nombre, MAX, stdin); // GUARDAMOS LO QUE EL USUARIO DIGA EN NOMBRE

	int x = 40; //INDICA EL CENTRO DE PANTALLA
	int y = 16;

	locatexy(x,y); //LLAMAMOS A LA FUNCION

	system("clear");
	
	printf("%s\n", nombre); //IMPRIMIMOS NOMBRE

	locatexy(0,100); // ESTO SIRVE PARA PRONT

	return EXIT_SUCCESS;
}
