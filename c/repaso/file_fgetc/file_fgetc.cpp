

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

int main(){
	
	FILE *notas;
		
	notas = fopen("notas.data", "r");

	if(!notas){
		printf("ERROR: Archivo no encontrado");
		return EXIT_FAILURE;
	}

	do{
		int leer = fgetc(notas);
			if(!feof(notas)){ //FEOF = FINAL END OF FILE
				printf(" %c ", (char)leer);
			}

	}while(!feof(notas)); /*!feof(notas)*/

	return EXIT_SUCCESS;

}
