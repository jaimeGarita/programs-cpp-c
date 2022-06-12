

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define MAX 10
void ask_user(){
	char answer;
	char gato;
	char humano;

	printf("Es un humano o es un gato (h/g): "); // H DE HUMANO G DE GATO
	scanf("%c", &answer);

	if (answer == 'h'){ //SI LA RESPUESTA ES = A H QUE ME PREGUNTE SI TIENE TOS
	printf ("¿Tiene tos?(s/n): "); //S DE SI N DE NO
	__fpurge(stdin); // TENGO QUE PURGAR EL STDIN AQUI PORQUE SINO SE ME GUARDA EN EL TUBO LA S Y ME SACA TODO EN CASO DE QUE EL USUARIO LE DE A LA H
	scanf("%c", &humano);
	}
	if (humano == 's'){ //SI LA VARIABLE HUMANO ES == A S QUE ME PREGUNTE SI TIENE TOS FERIAN
	printf("Es un humano con tos ferina \n");
	}
	if (humano == 'n'){ //SI EL HUMANO ES == A N DE NO
	printf("Es un humano sano \n"); // IMPRIMA SI ES UN HUMANO O NO
	}

	if (answer == 'g'){ //SI LA RESPUESTA DEL USUARIO ES == g
	printf("¿Tiene tos? (s/n): "); //IMPRIME SI TIENE TOS

	__fpurge(stdin); //TENGO QUE PURGAR EL STDIN PORQUE SINO SE ME QUEDA LA S DE ARRIBA Y ME SACA TODO LO QUE HAY DEBAJO

	scanf("%c", &gato);
	}

	if (gato == 's'){ // SI GATO ES == S DE SI
	printf("Es un gato con tos felina \n"); //IMPRIME
	}

	if (gato == 'n'){ //SI GATO == N
	printf("Es un gato que maulla \n"); //IMPRIME
	}
}

int main(){
	ask_user();	

	return EXIT_SUCCESS;

}
