

#include <stdio.h>
#include <stdlib.h>

int num_user(){
	int num;

	printf("Introduce un número: ");
	scanf("%i", &num);

	return num;
}

void estruc_if(){ //ESTRUCTURA DEL IF
	
	int num = num_user(); //NUMERO QUE EL USUARIO AÑADIDO

	if(num %2 == 0) //EL RESTO ENTRE 2 YA QUE SI ES PAR SIEMPRE VA A SER EL RESTO = A 0
		printf("El numero es par \n");
	else
		printf("El numero es impar \n");

}


int main(){

	estruc_if();	

	return EXIT_SUCCESS;

}
