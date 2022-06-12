

#include <stdio.h>
#include <stdlib.h>

int main(){
	char caracter;
	int num = 0;
	printf("Introduce un caracter: ");
	scanf("%c", &caracter);
	

	for(int i = 1; i<=caracter; i++){ // ESTO CONSIGUE QUE TENGA EL ASCII DEL CARACTER DEL USUARIO Y EL CHAR Y NOS RECOGE EL ASCII DE ESE NUMERO
	printf("%c = %i \n", caracter, num++); //DEFINO NUM++ PARA QUE ME INCREMENTE CADA VEZ QUE SE AÑADA UN CARACTER NUEVO
	}

	return EXIT_SUCCESS;

}
