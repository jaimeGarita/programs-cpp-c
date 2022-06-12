

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>



int main(){

	int numeros[] = {1,2,3,4,5,};
	int i = 0;	
	char parar;
	do{
			i++;
			printf ("Posicion %i = numero[%i]: %i \n", i, i, numeros[i]);
		
	}while(numeros[i] != 5);
	printf("La cantidad de variables tipo array que hemos usado han sido %i", i);

	int tamaño = sizeof(numeros)/sizeof(int);

	printf("\n \n %i \n \n", tamaño);
	printf("%i \n", *(numeros+3));
	printf("%i \n", numeros[3]);
		
	
	
	
	return EXIT_SUCCESS;

}
