#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
     ***************************
     * DECLARACION DE VARIABLES*
     ***************************
     */

    int op1,	// operando 1 
	op2,    // operando 2
	result; 



    /*
     ********************
     * ENTRADA DE DATOS *
     ********************
     */

    printf("Inserte el primer operando: ");
    scanf("%i", &op1);

    printf("Inserte el segundo operando: ");
    scanf("%i", &op2);



    /*CÁLCULO */

    result = op1 + op2;


    /*SALIDA DE DATOS */
    printf("la suma es igual a: %i \n", result);

    return EXIT_SUCCESS;

}
