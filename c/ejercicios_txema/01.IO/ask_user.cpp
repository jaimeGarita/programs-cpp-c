

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <unistd.h>
#include <string.h>

#define MAX 30
int number_int(){ 
//Creamos una funcion para introducir numero entero (Ej 1.)
	int num_int; // numero entero

	printf("Introduce un número entero: ");
	scanf("%i", &num_int);

	printf("Su numero es: %i \n\n", num_int);

	return num_int;
}
int number_float(){
//Creamos una funcion para introducir numero real (Ej 2)
	double num_float; //numero flotante

	printf("Introduce un número flotante: ");
	scanf("%lf", &num_float);

	printf("su numero es: %.2lf \n\n", num_float); //EL .2 ES PARA CAPAR LOS 0 Y QUE SOLO SALGAN 2 0, TAMBIEN TENEMOS QUE AÑADIR QUE SI PONEMOS UN NUMERO MAS TE LO REDONDEA

	return num_float;
}

int number_int_char(){
//EJERCICIO 3
//Creamos una funcion para preguntar un numero entero entre 32 y 128 y asi el usuario lo puede imprimir como caracter y como numero
	int num_int;
	char num_char;

	
	printf("Introduce un numero en un rango de 32 hasta 128: ");
	scanf("%i", &num_int);
 	
	printf("Su numero entero es: %i \n", num_int);
	
	num_char = num_int;
	printf("Su caracter es: %c \n\n", num_int);
	

	return num_char, num_int;
}
void number_hexa(){
	//FUNCION QUE IMPRIME EL VALOR HEXADECIMAL (EJERCICIO 4)
	char hexa[MAX];

	printf("imprime un numero en HEXADECIMAL: ");
	scanf(" %[0-9a-f-A-F]", hexa); //LO QUE HAY DENTRO DE LOS [] SIRVE PARA LIMITAR AL USUARIO LO QUE AÑADA
	
	
	printf("Tu numero es: %s\n\n", hexa); //S ES DE TIPO STRING

}
void clear_screen(){
	//EJERCICIO 5
	
	printf("\033[2J");
}

int preguntar_op(){

	//PARTE DEL EJERCICIO 6

	int num;
	int inc;
	
	inc = 0;
	
	printf("Inserte %i operando: ", ++inc);
	scanf("%i", &num);

	return num;


}


int imprimir_suma(int op1, int op2, int result){
	//EJERCICIO 6

	result = op1 + op2;	
	printf("\x1b[34m%i + \x1b[34m%i = \x1b[32m%i \n", op1, op2, result); //AQUI DIRECTAMENTE COLOCAMOS LOS COLORES
	return result;
}


void ansic(){
	
	printf ("\033[s"); //GUARDAMOS LA POSICION ACTUAL DEL CURSOR
	printf ("HOLA\n"); // IMPRIMIMOS HOLA
	printf ("\033[5D"); //MOVEMOS EL CURSOR A LA IZQUIERDA 5 VECES
	printf ("\033[s"); // GUARDAMOS LA POSICION
	printf ("\033[2A"); //DESPLAZAMOS EL CURSOR 2 VECES
	printf ("\033[1C"); // MOVEMOS A LA DERECHA 1 VEZ

	printf ("\033[s"); //GUARDAMOS EL CURSOR
}




void read_line(){
	//EJERCICIO 8

	char line[MAX];
	__fpurge (stdin); //FPURGE SIRVE PARA DEPURAR EL TUBO DEL TECLADO(STDIN) Y ASI PODER SACAR LA ARRAY LINEA

	printf("Introduce una frase: ");
	fgets(line, MAX, stdin); //INDICAMOS LA VARIABLE, LA CANTIDAD DE ARRAYS DE LA VARIABLE Y EL TUBO POR DONDE QUIERE QUE VAYA EL STDIN

	char scan_line = strlen (line);
	line[scan_line-1] = '\0'; //LE AÑADIMOS UN -1 QUE ES = A QUITAR EL SALTO DE LINEA QUE NOS SACA, EL \0 ES = AL VALOR CENTINELA

	printf("la frase es: \n\n");
	puts(line); //EL PUTS SIRVE PARA SACAR LA ARRAY DEL FGET
}

void ask_hexa(){
	//EJERCICIO 9
	int result_hexa;

	printf("Introduce un numero en decimal: ");
	scanf("%i", &result_hexa);

	printf("Su numero en Hexadecimal es  = %X\n\n", result_hexa); //EL X ES PARA QUE TE SACE EL VALOR HEXADECIMAL EN MAYUSCULAS
	//SI PONEMOS x NOS LO SACA EN MINÚSCULAS
	
	

}

void dir_variable(){
	// Ejercicio 10
	int variable;
	printf("La direccion de memoria de una variable creada es: %p \n\n", &variable);
}



int main(){

	int op1, op2, result;

	clear_screen(); //Borra la pantalla (ANSI)

	//LLAMAMOS A TODAS LAS FUNCIONES

	number_int();

	number_float();

	number_int_char();

	number_hexa();

	read_line();
	
	ask_hexa();

	dir_variable();

	op1 = preguntar_op();
	op2 = preguntar_op();
	imprimir_suma(op1, op2, result);	
	
	ansic();


	return EXIT_SUCCESS;

}
