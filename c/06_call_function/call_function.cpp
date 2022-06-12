
#include <stdio.h>
#include <stdlib.h>



int suma (int op1, int op2){
    
    return op1 + op2; //Establecemos un valor de retorno suma
}

int resta (int op1, int op2){

    return op1 - op2; //Establecemos un velor de retorno resta
}
int preguntar_op(int nop){

    int op;

    printf("Inserte el  %i operando: ", nop);
    scanf("%i", &op);

    return op;
}
 

int main(){

    int op1,	// operando 1 
	op2,    // operando 2
	result; 



    /*
     ********************
     * ENTRADA DE DATOS *
     ********************
     */
     op1 = preguntar_op(1);
     op2 = preguntar_op(2);


    /*CÁLCULO */
   result = suma (op1, op2);


    /*SALIDA DE DATOS */
    printf("la suma es igual a: %i \n", result);

    return EXIT_SUCCESS;

}
