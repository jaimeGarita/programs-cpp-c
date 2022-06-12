

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

#define MAX 10

int main(){

	char array[MAX][MAX];

	for (int i = 0 ; i < MAX; i++){
		for (int j = 0; j < MAX; j++){

		array[i][j]= '*';

		}
	}

	for (int i = 0; i < MAX; i++){
		for (int j = 0; j < MAX ; j++){

			printf("%c ", array[i][j]);

		}
	printf("\n");
	}

	return EXIT_SUCCESS;

}
