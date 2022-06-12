

#include <stdio.h>
#include <stdlib.h>

int main(){

	//DECLARATE VARIABLE

	int op1;
	int op2;
	int result;

	//WE DEFINE FIRST NUMBER

	printf("Ingrese un numero (Hexadecimal): ");
	scanf("%x", &op1);

	//WE DEFINE SECOND NUMBER

	printf("Ingrese un segundo numero(Hexadecimal): ");	
	scanf("%x", &op2);


	//WE DEFINE THE VARIABLE RESULT

	result = op1 + op2;

	//PRINT THE VARIABLE RESULT AND PRINTF IN SCREEN
	
	printf("El resultado es = %x \n",result);

	return EXIT_SUCCESS;

}
