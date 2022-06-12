

#include <stdio.h>
#include <stdlib.h>

int main(){

	char caracter_user;

	printf("Introduce una letra o un numero: ");
	scanf("%c", &caracter_user);

	for (int i = 0; i< 11; i++){
	printf("%c \n", caracter_user);
	}

	return EXIT_SUCCESS;

}
