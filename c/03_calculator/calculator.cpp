

#include <stdio.h>
#include <stdlib.h>
#include <string>



int main(){
	/*VARIABLES */
	int op1, //operando 1
	    op2, //operando 2
	    opr, //operador
	    result;

	/*DISEÑO CALCULADORA*/
	system ("clear");
	system ("toilet -fpagga --metal ' Calculadora '");
	
	/*DEFINIMOS OPERANDO 1*/
	printf ("introduce el primer operando: ");
	scanf ("%i", &op1);

	/*DEFINIMOS OPERANDO 2*/
	printf("introduce el segundo operando: ");
	scanf ("%i", &op2);

	/*MENU PARA QUE EL USER ESCOGA EL OPERADOR*/
	system ("clear");
	system ("figlet -small Menu de operador");

	printf ("1.-Suma \n");
	printf ("2.-Resta \n");
	printf ("3.-Multiplicación \n");
	printf ("4.-División \n");
	
	printf("El operador elegido es: ");
	scanf("%i",&opr);

        /*ALGORITMO*/

	switch(opr){
	
	case 1: result = op1 + op2;
	break;
	case 2: result = op1 - op2;
	break;
	case 3: result = op1 * op2;
	break;
	case 4: result = op1 / op2;
	break;

	}
	printf("tu resultado es: %i \n", result);
}



