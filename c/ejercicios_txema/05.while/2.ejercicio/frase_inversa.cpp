

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

#define MAX 30
int main(){
	
	char array[MAX];
	
	printf("Introduce una frase: ");
	fgets(array, MAX, stdin);
	int tamaño_frase = strlen(array);
	
	while(tamaño_frase != '\0'-1){ //MIENTRAS QUE EL TAMAÑO FRASE NO SEA IGUAL AL VALOR CENTINELA -1 QUE ME HAGA EL WHILE. (EL -1 SIRVE PARA QUE TAMBIEN TE COGA LA PRIMERA PALABRA QUE AÑADIMOS)
	
	printf("%c", array[tamaño_frase]);
	tamaño_frase--;
	
	}
	
	return EXIT_SUCCESS;
	
}
