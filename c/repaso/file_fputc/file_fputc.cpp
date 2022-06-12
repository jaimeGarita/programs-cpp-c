

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>


int main(){
	FILE *file;
	char letter;

	file = fopen("notas.txt", "w");
	
	if(!file){
		printf("ERROR: Archivo no encontrado!");
		return EXIT_FAILURE;
	}

	printf("Escribe CARACTER para meter en el fichero: ");
	scanf("%c", &letter);
	fputc(letter, file);
	

	fclose(file);

	file = fopen("notas.txt", "r");
	
	do{
		int lectura = fgetc(file);
			if(!feof(file)){
				printf("%c", (char) lectura);
			}
	}while(!feof(file));
	
	fclose(file);
	
	return EXIT_SUCCESS;

}
