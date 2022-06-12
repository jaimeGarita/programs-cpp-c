
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int display_option(){
	//limpieza de pantalla
	system ("clear");
	system ("figlet 'Calculadora'");
	
	return 0;
}

int preguntar_operador(){
	//PREGUNTAR OPERANDO
	static int operando = 1;
	int result_operando;
	
	printf("inserte %iº operando: ", operando++);
	scanf("%i", &result_operando);
	

	return result_operando;



}

int declarar_op(){
	//PREGUNTAR OPERADOR
	int op;

	static int num = 0;
	num = ++num;

	printf("%i .- + (Suma) \n", num);
	

	num = ++num;
	printf("%i .- - (Resta) \n", num);
	
	num = ++num;	
	printf("%i .- / (division) \n", num);

	printf ("Escoge las siguientes opcion: ");
	scanf("%i", &op);

	return op;

}


int suma(int op1, int op2){
	//FUNCION DE SUMA
	return op1 + op2;

}

int resta(int op1, int op2){
	//FUNCION DE RESTA
	return op1 - op2;
}

int division(int op1, int op2){
	return op1 / op2;
	
}

int main(){

	//DECLARACION DE VARIABLES
	int op1, op2, user_add, op ;
	
	//DECIMOS QUE LOS OPERADORES VA A SER IGUAL A LO QUE EL USUARIO AÑADA
	op1 = preguntar_operador();
	op2 = preguntar_operador();	
	
	//LIMPIAMOS LA PANTALLA Y DECIMOS QUE EL RESULTADO VA A SER LA DECLARACION DEL OPERADOR
	display_option();
		
	
	//ALGORITMO
	
	user_add = declarar_op();
	
	if (user_add == 1){
		system("clear");
		printf("El resultado de la suma es = %i \n", suma(op1, op2));
	}

	if (user_add == 2){
		system("clear");
		printf("El resultado de la resta es = %i \n", resta(op1, op2));	

	}

	if (user_add == 3){
		system("clear");
		printf("El resultado de la division es = %i \n", division(op1, op2));

	}
	return 0;
	} 	
	
