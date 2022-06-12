

#include <stdio.h>
#include <stdlib.h>

int main(){
	int A[10][10];
	int x = 0;
	int y = 0;

	for(x = 0 ; x<10; x++){
		for(y = 0; y<10; y++){
		A[x][y] = x;
		}
	}
	
	for(x = 0 ; x<10; x++){
		for(y = 0; y<10; y++){
			printf("%i ", A[x][y]);
			
		}
	printf("\n");
	}

	return EXIT_SUCCESS;

}
