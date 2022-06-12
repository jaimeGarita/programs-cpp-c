

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

int main(){
	float num;
	int numeros_añadidos=1;
	float media;
	float suma_numeros = 0;
	do {
	
	printf("Introduce un numero positivo: ");
	scanf("%f", &num);
	suma_numeros = suma_numeros + num;
	numeros_añadidos++;
	


	} while (num > 0 || num != 0 );
	
	media = suma_numeros / numeros_añadidos;

	printf("La media es: %f", media);

	return EXIT_SUCCESS;

}
