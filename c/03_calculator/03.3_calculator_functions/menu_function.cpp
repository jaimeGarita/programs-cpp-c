 //PROGRAMA CREADO POR JAIME GARITAGOITIA
 

#include <stdio.h>
#include <stdlib.h>


// MENU PARA LIMPIAR PANTALLA
void display_option(){
	
	system("clear");
	system("toilet -fpagga CALCULADORA CON FUNCIONES");

}


// MENU PARA ELEGIR QUE TIPO DE CALCULADORA QUIERES
int menu_desplegable(){
	int user_menu, inc_num;
	
	inc_num = 1;

	printf("\n \n");

	printf("%i.- Calculadora Decimal \n", inc_num);
	inc_num = ++inc_num;
	printf("%i.- Calculadora Hexadecimal \n \n", inc_num);

	printf("Indicame una de las siguientes opciones: ");
	scanf("%i", &user_menu);

	return user_menu;
}


// DECLARAMOS VARIABLE OPERANDOS
int operandos(){
	int op, num; // LA VARIABLE NUM ES PARA QUE ME INDIQUE EL NUMERO DE OPERANDOS

	num = 1;

	printf("Inserte su %i  operando: ", ++num);
	
	scanf("%i", &op);

	return op;

}

//FUNCION QUE SIRVE PARA QUE EL USUARIO ELIGA EL OPERANDO Y POSTERIORMENTE UTILIZARLO EN LA FUNCION DE ALGORITMO
int operador(){
	system("clear");
	system("figlet  OPERADOR");
	int opr;
	
	printf("1.- Suma \n");
	printf("2.- Resta \n");
	printf("3.- Multiplicacion \n");
	printf("4.- Division \n \n");
	printf("Marque el operador que quiera con el numero indicado a su izquierda: ");
	scanf("%i", &opr);

	return opr;
}

//SON FUNCIONES DE OPERACIONES PARA DESPUES HACER EL ALGORITMO
int suma(int op1, int op2){

	return op1 + op2;
}

int resta(int op1, int op2){
	
	return op1 - op2;

}

int multiplicacion(int op1, int op2){

	return op1 * op2;
}

int division(int op1, int op2){

	return op1 / op2;
}

void resultado_decimal(int result){

	printf("\n El resultado es = %i  ", result);
}

void resultado_hexadecimal(int result){
	printf("El resultado es = %x  ", result);
}

// FUNCION ALGORITMOS, EN EL CUAL IMPRIMIMOS LOS RESULTADO
int algoritmo(int result, int op1, int op2){
	int elec_menu = menu_desplegable(); // PARA QUE SEA MAS VISUAL, PONGO ELEC_MENU Y LO DELCARO EN EL SWITCH
	switch(elec_menu){

	case 1: //ELECCION SUMA DECIMAL

		switch(operador()){ // DEFINO EL SWITCH COMO OPERADOR Y EN CASO DE QUE ME ELIGA EL NUMERO DESEADO DEL OPERADOR QUE ME LO AÑADA
			case 1: // CASO DE SUMA EN DECIMAL
				result = suma(op1, op2);
				resultado_decimal(result);
			break;

			case 2:	// CASO DE RESTA EN DECIMAL
				result = resta(op1, op2);
				resultado_decimal(result);
			break;

			case 3: // CASO DE MULTIPLICACION EN DECIMAL
				result = multiplicacion(op1, op2);
				resultado_decimal(result);
			break;

			case 4: //CASO DE RESTA EN DECIMAL
				result = division(op1, op2);
				resultado_decimal(result);
			break;
		}

	break;

	case 2:

		switch(operador()){ // DECLARAMOS OTRO SWITCH COMO EL DE ARRIBA, PERO EN ESTE CASO PARA HEXADECIMALES
			case 1: // RESULTADO DE SUMA EN HEXADECIMAL
				result = suma(op1, op2); 
				resultado_hexadecimal(result);
			break;

			case 2: // RESULTADO DE LA RESTA EN HEXADECIMAL
				result = resta(op1, op2);
				resultado_hexadecimal(result);
			break;

			case 3:
				//RESULTADO DE LA MULTIPLICACION EN HEXADECIMAL
				result = multiplicacion(op1, op2);
				resultado_hexadecimal(result);
			break;

			case 4:

				//RESULTADO DE LA DIVISION EN HEXADECIMAL
				result = division(op1, op2);
				resultado_hexadecimal(result);
			break;
			
		}
	break;

		}
	
	return result;
}


int main(){

	int op1, op2, result; //DECLARAMOS LAS VARIABLES QUE USAMOS ARRIBA PARA PARAMETROS

	display_option(); //LLAMAMOS A LA FUNCION PARA QUE NOS LIMPIE LA PANTALLA
	

	op1 = operandos(); //DEFINIMOS OP1 PARA QUE SEA EL PRIMER OPERANDO
	op2 = operandos(); //DEFINIMOS OP2 PARA QUE SEA EL SEGUNDO OPERANDO

	algoritmo(result, op1, op2); //LLAMAMOS A LA FUNCION DEL ALGORITMO
	


	system ("clear");	
	
	return EXIT_SUCCESS;

}
