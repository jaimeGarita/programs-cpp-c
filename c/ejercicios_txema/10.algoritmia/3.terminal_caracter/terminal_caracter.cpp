

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>
#define MAX 30


int main(){
	char frase[MAX];
	char caracteres;
	char frase_parentesis[MAX];
	int i=0;
	int num;

	int increm = 1;

	printf("Ingrese numero de caracteres a imprimir ");
	scanf("%i", &num);
	__fpurge(stdin);
	do{

		printf("Ingrese una linea de caracteres: ");
			caracteres = getchar(); //GETCHAR GUARDA LA TECLA QUE TU PULSES
			__fpurge(stdin); //LIMPIA EL STDIN PARA QUE CUANDO LE DES AL ENTER NO SE TE GUARDE TAMBIEN EL ENTER SINO LA TECLA QUE PULSAS

		i++;
//Programa sin terminar	
	}while(i < num);
	

	return EXIT_SUCCESS;

}
