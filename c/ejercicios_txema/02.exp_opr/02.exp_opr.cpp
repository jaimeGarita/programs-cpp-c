

#include <stdio.h>
#include <stdlib.h>
#define MAX 10


void primer_ejercicio(){

	int array[MAX];
	
	printf("La cantidad del array es de: %li bytes\n", sizeof(array));
}

void segundo_ejercicio(){
	int array[MAX];
	int tamaño_elemento, tipo_dato, cantidad_elementos;

	tamaño_elemento = sizeof(array); //CANTIDAD DE BYTES QUE OCUPA EL ARRAY
	tipo_dato = sizeof(int); // CUANTO OCUPA UN VALOR INT SE PUEDE CAMBIAR 
	
	cantidad_elementos = tamaño_elemento / tipo_dato; 
	//DIVIDIMOS LOS BYTES TAMAÑO_ELEMENTO / TIPO DATO Y ASI PODEMOS SABER CUANTOS ELEMENTOS TIENE EL ARRAY.
       		//SI QUEREMOS VER LOS ELEMENTOS EN TIPO LONG INT ES TAN SIMPLE COMO CAMBIAR EL TIPO DE DATO Y PONER EN VEZ DE INT LONG INT

	printf("La cantidad de elementos de una array es de: %i \n\n", cantidad_elementos);
	
	
}

void tercer_ejercicio(){
	int a;
	long int b;
	long long int c;

	printf("El tamaño de una variable de tipo int es de %li \n", sizeof(a));
	printf("El tamaño de una variable de tipo long int es de %li \n", sizeof(b));
	printf("El tamaño de una variable de tipo long long int es de %li \n",  sizeof (c));


	
}

void cuarto_ejercicio(){
	
	int a = 0;
	char b = 6; //TENEMOS QUE PENSAR QUE TIPO CHAR ES 1 BYTE Y POR LO CUAL SON = 8 BITS

	while (b > 0){ //CONDICIONAL MIENTRAS QUE B SEA MAYOR QUE 0 SE CUMPLE LA CONDICION
	
	b <<= 1; //DESPLAZA A LA IZQUIERDA EL BIT EN BINARIO, POR EJEMPLO 6 = 001100 PASA A SER 011000 = 12 HASTA QUE LLEGUE AL 7º BIT
       		 //Y EL 8 BIT ES SI POSITIVO O SI ES NEGATIVO.
		 //SOLO LLEGA HASTA EL 8º BIT PORQUE ES DE TIPO CHAR 						
	b |= (a = a++ %2); /* EN CASO DE QUE LA VARIABLE a SEA PAR LO QUE HACE ES SUMARLE UNO PARA QUE SEA IMPAR Y
			    * ES NUMERO ES DEPLAZADO UN BIT A LA IZQUIERDA
			    * ESE NUMERO IMPAR, SI VUELVE A SER DESPLAZADO SE SIGUE SUMANDO UNO
			    *
			    * EJEMPLO:
			    * EL NUMERO a = 12, lo sumamos 1 = 13
			    *
			    * Lo vuelve a desplazar a la izquierda, por lo cual seria 26 y le suma 1 y seria 27 y asi haria hasta que llegue al
			    * bit que indica si el numero es positivo o negativo */


	}
	printf("%i", b); //IMPRIME
}


int main(){

	primer_ejercicio();
	
	segundo_ejercicio();

	tercer_ejercicio();
	
	cuarto_ejercicio();	
	return EXIT_SUCCESS;

}
