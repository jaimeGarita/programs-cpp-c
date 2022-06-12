

#include <stdio.h>
#include <stdlib.h>

void title(){
//Ejercicio 1

system("clear"); //BORRA PANTALLA
system("toilet -fpagga Funciones"); // PONEMOS EN BONITO LA PALABRA "FUNCIONES"

}
int preguntar_op(){

//HE DISEÑADO ESTA FUNCION PARA QUE EL USUARIO PREGUNTE LOS OPERANDOS Y ASI EN LA FUNCION SUMA PODER SUMAR LOS OPERANDOS QUE EL USUARIO QUIERE

//PARTE EJERCICIO 2
	int num;
	printf("introduce sus operandos: ");
	scanf("%i", &num);

	return num;
}
int suma (int op1, int op2){
//EJERCICIO 2
	return op1 + op2;
}

void pedir_entero(int *variable){
//EJERCICIO 4
printf("Su numero guardado en una direccion de memoria %i \n", *variable); // NUMERO GUARDADO EN UNA DIRECCION DE MEMORIA
printf("Apuntando a: %p \n", variable); //DONDE SE GUARDA EL NUMERO

}


int main(){
	int op1, op2, result, variable;

	title(); //EJERCICIO 1
	op1 = preguntar_op(); //PARTE EJERCICIO 2
	op2 = preguntar_op(); //PARTE EJERCICIO 2

	result = suma(op1, op2); //EJERCICIO 2
		
	printf("su resultado es: %i \n", result); //EJERCICIO 2


	//EJERCICIO 3
	
	printf("Introduce un numero: ");
	scanf("%i", &variable);

	pedir_entero(&variable);
		
	return EXIT_SUCCESS;

}
