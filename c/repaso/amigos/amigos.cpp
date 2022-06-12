

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>



int main(){
	char **nombre;
	int num;

	system("toilet -fpagga --gay AMIGOS PARA SIEMPRE");
	printf("Introduce numero de amigos: ");
	scanf("%i", &num);

	nombre = (char**) malloc(num * sizeof(char*));
	
	system("clear");
	for(int i=0; i<num; i++){
		system("clear");
		printf("Amigo %i: ",i+1);
		scanf("%ms", nombre+i);
	}
	system("clear");
	for (int j=0; j<num; j++){
		printf("Amigo %i: %s \n", j+1, *(nombre+j));
	}
	
	free(nombre);

	return EXIT_SUCCESS;

}
