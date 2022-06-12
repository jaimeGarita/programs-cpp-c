

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define MAX 0x100

int main(){
	
	FILE *notas;
	char datos[MAX];
	
	notas = fopen("notas.data", "r");

	if(!notas){
		printf("ERROR: Archivo no encontrado!");
	}
		
	do{
		fgets(datos, MAX, notas);
		printf("%s", datos);
		
	}while(!feof(notas));

	fclose(notas);

	return EXIT_SUCCESS;

}
