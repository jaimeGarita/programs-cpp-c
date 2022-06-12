#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

void imprimir(Vector v){
	printf("(%2lf, %2lf, %2lf) ", v.x, v.y, v.z);
};

int main(){
	
	Vector v0(2,3,5);
	Vector v1(4,5,6);
	Vector result = v0+v1;
	

	imprimir(v0);
	printf("+");

	imprimir(v1);
	printf("=");

	imprimir(result);
	
	return EXIT_SUCCESS;
}
