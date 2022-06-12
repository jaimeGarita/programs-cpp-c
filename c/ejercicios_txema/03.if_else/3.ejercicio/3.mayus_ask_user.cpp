


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int ask_user(){ //FUNCION PARA PREGUNTAR AL USUARIO

	char answer;
	
	printf("¿Desea instalar algo? s/n: ");
	scanf("%c", &answer);

	return answer;
}

void estruc_if(){ //FUNCION DE LA ESTRUCTURA DEL IF

	char letter = ask_user();
	letter = tolower(letter);

	if(letter == 's')
		printf("Pues lo instalo \n");
	if (letter == 'n')
		printf("PUes no te lo instalo \n");


}

int main(){
	
	estruc_if();

	return EXIT_SUCCESS;

}
