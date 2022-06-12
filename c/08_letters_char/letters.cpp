#include <stdio.h>
#include <stdlib.h>
#define num_variables 30 


//Function that clear the system and put word BIENVENIDO
void system_default(){
	system ("clear");
	system("toilet -fpagga --metal 'BIENVENIDO'");


}

//put array and write the user choose in this variable
//Pone un array y el usuario escribe en el lo que quiera y lo almacena en la misma array
void nombre(){
 
    char nombre[num_variables]; //Array
   
    printf("Introduce tu nombre: "); //Imprime
    fgets(nombre, num_variables, stdin); //
    
	
    printf("Bienvenido a este gran "); // imprime en pantalla
    puts(nombre); // saca el nombre por el put
} 

//Funcion Main, llamamos a las funciones
int main(){
	system_default();
	nombre();
}

