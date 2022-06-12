

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>
#include <string.h>

#define MAX 30

int preguntar_usuario(){
	// FUNCION PARA PREGUNTAR AL USUARIO LA ELECCION PARA DESPUES USAR EL SWITCH
	int num;

	printf ("1.- directorio a su eleccion \n");
	printf ("2.- ocupacion de un directorio y un subdirectorio \n"); 
	printf ("3.- espacio de cada disco \n"); 
	printf ("4.- ocupacion de memoria \n");
	printf ("Introduce lo que necesites introduciendo el numero de la izquierda: ");
	scanf("%i", &num);
	
	return num;

}
void algoritmo_switch(){
	int num_usuario = preguntar_usuario();

		char directorio[MAX];
		char command[MAX] = "ls -lh";

	switch(num_usuario){

		 		
		case 1:
		//STRCAT SIRVE PARA CONCATENAR LOS VALORES

		__fpurge(stdin); //LIMPIAMOS EL TUBO STDIN
		printf("introduce el directorio que quieres mirar ");
		fgets (directorio,  MAX, stdin); //GUARDAMOS UNA CADENA DE CARÁCTERES
		
				 strcat (command, " "); //LE AÑADIMOS UN ESPACIO PARA SEPARAR DESPUES EL COMANDO CON EL DIRECTORIO
		strcat (command, directorio); // CONCATENAMOS EL COMANDO CON EL DIRECTORIO

		system (command); // LLAMAMOS A COMMAND
		
		break;

		case 2: // EN CASO DE QUE EL DE AL 2
			system("du -sh");
		break;

		case 3: // EN CASO DE QUE LE DE AL 3
			system("df -h");
		break;

		case 4: // EN CASO DE QUE LE DE AL 4
			system("free");
		break; 

	}	

}

int main(){
	system("clear");
	algoritmo_switch();
	
	return EXIT_SUCCESS;
}
