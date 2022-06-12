//LA PRINCIPAL FUNCION DEL PROGRAMA ES A BASE DE UNA ARRAY PODER AÑADIR UN TOTAL DE 6 CEROS Y CADA VEZ QUE AÑADA UN NUMERO ME LO SUSTITUYA
//POR EJEMPLO, SI TENGO EL 54 ME COGA EL 4 COMO UNIDAD Y EL 5 COMO DECENA Y ASI PODER SUSTITUIR LOS 0 POR ESOS NUMEROS

#include <stdio.h>
#include <stdlib.h>

//CREAMOS LA FUNCION PARA QUE EL USUARIO AÑADA EL VALOR QUE EL DESÉ
int numero_user(){
	int user_add;

	printf("introduce un operando: ");
	scanf("%i", &user_add);

	return user_add;
}

//CREAMOS LA FUNCION DE SUMA, SUMANDO LOS OPERANDOS DESEADOS DEL USUARIO

int suma(int op1, int op2){
	return op1 + op2;
}

// DESGLOSAMOS LOS NUMEROS EN UNIDADES, ES DECIR QUE ME VA A COGER LA UNIDAD DE EL NÚMERO QUE SEA
int unidades(int op1, int op2){
	int num_unidad;
	num_unidad = suma(op1, op2);
	num_unidad = num_unidad%10; //unidad

	return num_unidad;
}

//DESGLOSAMOS LOS NUMEROS EN DECENAS, ES DECIR QUE ME VA A COGER LAS DECENAS DEL EL NÚMERO QUE SEA
int decena(int op1, int op2){
	int num_decena;
	num_decena = suma(op1, op2);
	num_decena = num_decena/10;
	num_decena = num_decena%10;		
	return  num_decena;
}



			


int main(){
	//DECLARAMOS LAS VARIABLES
	int op1, op2, suma_op;
	
	//DEFINIMOS QUE LA VARIABLE OP1 ES LA FUNCION DE NUMERO_USER
	op1 = numero_user();
	//DEFINIMOS QUE LA VARIABLE OP2 ES LA FUNCION NUMERO_USER
	op2 = numero_user();
	
	//Imprimimos los datos
	system("clear");
	printf("La suma es = %i \n", suma(op1, op2));

	printf("La unidad de la suma es = %i \n", unidades(op1, op2));
	printf("La decena de la suma es = %i \n", decena(op1, op2));

	return EXIT_SUCCESS;

}
