

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define fichero "notas.txt"
#define MAX 0x20

int main(){
	
	char word_user[MAX];
	FILE *word;
	
	word = fopen(fichero, "w");

	printf("Introduce una palabra para guardarla en el fichero: ");
	scanf("%s", word_user);
	
	if(!word){
		fprintf(stderr,"ERROR: Fichero %s no encontrado", fichero);
		return EXIT_FAILURE;
	}

	fputs(word_user, word);
	
	fclose(word);
	word = fopen(fichero, "r");

	fgets(word_user, MAX, word);
	printf("%s", word_user);

	fclose(word);

	return EXIT_SUCCESS;

}
