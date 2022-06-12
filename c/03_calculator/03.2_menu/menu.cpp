

#include <stdio.h>
#include <stdlib.h>

int main()
{

system("clear");


    /*DECLARACION VARIABLE */

    int op1,			//operando 1
     op2,			//operando 2
     opr,			//operador
     menu,			// Variable del switch para elejir el programa
     result;			// resultado


     /*MENU*/ 
    system("figlet -w 80 ' MENU '");
    printf ("1.- Calculadora \n");
    printf ("2.- Algunos datos... \n");
    printf ("3.- Proximamente \n");
    printf ("Elige una de las siguientes opciones: ");
    scanf ("%i", &menu);

    system ("clear");

    /*INICIO DE PROGRAMA */
    switch (menu) {
     /*CALCULADORA*/ case 1:
	system ("clear");	// borra pantalla

	/*OPERANDOS DE LA CALCULADORA */
	system ("toilet -fpagga --metal 'CALCULADORA'");

	printf ("insterte el primer operando : ");
	scanf ("%i", &op1);

	printf ("inserte el segundo operando: ");
	scanf ("%i", &op2);

	/*OPERADORES DE LA CALCULADORA */
	printf ("1.- Suma \n");
	printf ("2.- Resta \n");
	printf ("3.- Multiplicación \n");
	printf ("4.- División: \n");
	printf ("inserte el operador según el número que aparece a la izquierda:  \n");
	scanf ("%i", &opr);
	switch (opr) {

	    /*RESULTADOS DE LA OPERACION */

	case 1:
	    //suma

	    result = op1 + op2;

	    printf ("El resultado de la suma es: %i \n", result);
	    break;

	case 2:
	    //resta
	    
	    result = op1 - op2;

	    printf ("El resultado de la resta es: %i \n", result);
	    break;

	case 3:
	    //multiplicacion
	   
	    result = op1 * op2;

	    printf ("El resultado de la multiplicación es: %i \n", result);
	    break;

	case 4:
	    //division
	    result = op1 / op2;
	    printf ("El resultado de la resta es: %i \n", result);
	    break;

	}
	break;

	/*DIRECCIONES DE MEMORIA Y TAMAÑO DE BYTES */
    case 2:
	system ("clear");
	system("toilet -fpagga --metal 'DIRECCIONES MEMORIA Y TAMAÑO BYTES'");

	printf ("&%p: %i (%lu bytes)\n", &op1, op1, sizeof(op1));	/*VARIABLE OP1 */
	printf ("&%p: %i (%lu bytes)\n", &op2, op2, sizeof(op2));	/*VARIABLE OP2 */
	printf ("El total es = %lu bytes. \n", sizeof(&op1));
	break;

	/*RAIZ CUADRADA */
    case 3:
	system("clear");
	system("figlet -w 100 'RAIZ CUADRADA'");
	
	//DECLARACION DE VARIABLES
	
	float basefrac, // base de la fraccion
	    operandofrac; //operando de la fracción

	printf ("indicame la base de la raiz: ");
	scanf ("%f", &basefrac);

	printf ("indicame el operando de la raiz: ");
	scanf ("%f", &operandofrac);
	
	operandofrac = //me quede por aqui

	break;


    }



    return EXIT_SUCCESS;

}
