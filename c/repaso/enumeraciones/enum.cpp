

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define file "fichero.txt"

int main(){
	//FGETS Y FPUTS
	char palabra[30];
	FILE *f;
	int prueba;	
	f = fopen(file, "w");
	
	printf("Palabra a imprimir: ");
	scanf("%[^\n]", palabra); //HACER UN ESPACIO EQUIVALE A UN /N EN EL FICHERO
	
	fputs(palabra, f); //FUNCION QUE IMPRIME EN EL FICHERO

	fclose(f);

	f = fopen(file, "r");

	do{
	fgets(palabra, 30, f);
	}while(!feof(f));
	printf("%s", palabra);

	return EXIT_SUCCESS;

}
