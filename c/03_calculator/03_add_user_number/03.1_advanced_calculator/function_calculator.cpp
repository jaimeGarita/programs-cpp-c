

#include <stdio.h>
#include <stdlib.h>
int suma(int op1, int op2){
	return op1 + op2;
}

int resta (int op1, int op2){
	return op1 - op2;
}

int preguntar_op(){

static int nop = 0;
nop = nop++;

int op;

	printf("inserte el %i operando: ",++nop );
	scanf("%i", &op);

	return op;

}





int main(){

	int op1, op2, result;
	
	system ("clear");
	

	op1 = preguntar_op();
	op2 = preguntar_op();
	
	result = suma (op1, op2);
	printf("%i \n", result);

	return EXIT_SUCCESS;

}
