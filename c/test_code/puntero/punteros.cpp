

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

int suma(int *op1, int *op2){
	return *op1 + *op2;
}

int main(){
	int op1, op2;
	op1 = 2;
	op2 = 1;

	suma(&op1, &op2);

	printf("%i \n", suma(&op1, &op2));

	return EXIT_SUCCESS;

}
