

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>
#include <ctype.h>
#define MAX 30

int imprimir(){
	
	//PROCESO ALGORITMICO CREADO POR ROY, ARTURO, ANDRES Y JAIME

	char nombre[MAX];
	char caracter_usuario;
	printf("Introduce su nombre: ");

	fgets (nombre, MAX, stdin); //GUARDAMOS LO QUE META EL USUARIO EN LA ARRAY NOMBRE

	int tamaño_nombre = strlen(nombre)+3; //EL TAMAÑO NOMBRE ES LO MISMO QUE EL STRLEN DEL NOMBRE. EL +3 SIRVE PARA AJUSTAR LA LINEA SUPERIOR
					      // E INFERIOR DE CARÁCTERES AL NOMBRE CON LOS ASTERISCOS LATERALES, ES DECIR EL ESPACIO DE LA IZQUIERD A                                              // DEL NOMBRE (+1) EL ESPACIO DE LA DERECHA DEL NOMBRE (+2) Y EL ASTERISCO DE LA DERECHA (+3)
	nombre[strlen(nombre)-1] = '\0';      // ESTO SIRVE PARA QUITAR EL VALOR \N Y CAMBIARLO POR \0

	printf("Introduce el caracter: ");    
	scanf("%c", &caracter_usuario);       // SE AÑADE EN LA VARIABLE CARACTER_USUARIO LO QUE EL USUARIO AÑADA
	

	system("clear");
	
	for (int i = 0; i< tamaño_nombre ; i++){ // BUCLE DESDE I HASTA TAMAÑO_NOMBRE LO INCREMENTO
		printf("%c",caracter_usuario); // IMPRIMO LINEA SUPERIOR DE CARACTERES
	}
	printf("\n");

	printf("%c ", caracter_usuario); //IMPRIME ASTERISCO A LA IZQUIERDA
	
	for (int j = 0;  j < strlen(nombre) ; j++){ //PARA J = 0 HASTA EL STRLEN DE NOMBRE J++
	nombre[j] = toupper(nombre[j]); // ESTO SIRVE PARA CAMBIAR CARACTER A CARACTER LA ARRAY NOMBRE
	printf("%c", nombre[j]); //IMPRIME
	
	}

	printf(" %c \n", caracter_usuario); //IMPRIME EL CARACTER A LA DERECHA

	for (int x = 0; x < tamaño_nombre ; x++){ //PARA X = 0 HASTA EL TAMAÑO DEL NOMBRE INCREMENTO
		printf("%c", caracter_usuario);	 //IMPRIME ASTERISCO A LA DERECHA
	}
	printf("\n");
	printf("J-a"); printf("R/a"); //IMPRIME

	return EXIT_SUCCESS;

}

int main(){
	
	imprimir(); //LLAMO A LA FUNCION IMPRIMIR
	
	return EXIT_SUCCESS;
}


