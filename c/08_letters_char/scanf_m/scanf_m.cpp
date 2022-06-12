

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>
#define MAX 10
int main(){
	
	char *nombre;
	
	printf("Introduce su nombre: ");
	scanf("%ms[^\n]", &nombre);
	
	printf("Name: %s \n", nombre);
	
	free (nombre);
	return EXIT_SUCCESS;

}
