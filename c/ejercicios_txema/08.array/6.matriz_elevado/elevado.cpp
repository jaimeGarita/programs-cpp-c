

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int A[3][10];
	int x = 0;
	int y = 0;
	int exponente = 1;

	for(x = 0; x<3; x++){
		for(y = 0; y<10; y++){
		A[0][y] = y;
		A[1][y] = pow(y, 2);
		A[2][y] = pow(y, 3);
		}
	}
	
	for(x = 0 ; x<3; x++){
		for(y = 0; y<10; y++){
			printf("%i ", A[x][y]);
			
		}
	printf("\n");
	}

	return EXIT_SUCCESS;

}
