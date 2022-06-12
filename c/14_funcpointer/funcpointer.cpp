

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>

int suma(int op1, int op2);
int rest(int op1, int op2);
int mult(int op1, int op2);
int divi(int op1, int op2);

int (*operaciones[])(int op1, int op2) = { &suma, &rest, &mult, &divi };

/*

**operaciones	*operaciones[num] Contenido de las funciones 
_________	 _______	 _______
|	|	|	|	|	|
|   O-------->	|   O--------->	|SUMA	|
|_______|  |	|_______|	|_______|
	   |	 _______	 _______
	   |	|	|	|	|
	   +---	|    O-------->	|RESTA	|
	   |	|_______|	|_______|
	   |	 _______	 _______
	   |	|	|	|	|
	   +---	|    O-------->	|MULTIP	|
	   |	|_______|	|_______|
	   |	 _______	 _______
	   |	|	|	|	|
	   +---	|    O-------->	|DIVIS	|
		|_______|	|_______|

OPERACIONES ES PUNTERO A PUNTEROS
OPERACIONES ESTA APUNTANDO A FUNCIONES

*/

const char *menu_opt[] = {
	"Suma",
	"Resta",
	"Multiplicacion",
	"Division",
	NULL
};

enum TOp { sum, rst, mlt, dvd, TOT_OP };
//ESTA ES UNA ENUMERACION PARA USAR POSTERIORMENTE

enum TOp elec_menu(){
	unsigned i = 0;
	unsigned elegido;

	const char **p_menu = menu_opt;
	/*					
		 _______	 _______	 _______
		|	|	|	|  	|	|
		|    O-------->	|   O--------->	|	|
		|_______|	|_______|  	|_______|
		**p_menu|	(*p_menu+0)	menu_opt[0] = suma
			|			
			|	 _______	 _______
	  		| 	|	|	|	|	
	   		+------	|    O-------->	|	|
			|	|_______|	|_______|
			|	(*p_menu+1)	menu_opt[1] = resta
			|
			|
	 		|	 _______	 _______
	  		|	|	|	|	|	
	   		+------	|    O-------->	|	|
			|	|_______|	|_______|
			|	(*p_menu+2)	menu_opt[2] = multiplicacion	
			|
			|
			|
			|	 _______	 _______
	  		|	|	|	|	|	
	   		+------	|    O-------->	|	|
				|_______|	|_______|
				(*p_menu+3)	menu_opt[3] = division
	*/



	while(*p_menu != NULL){
		printf("\t\t %u .- %s", ++i, *p_menu); //vamos a imprimir lo que apunte p_menu = menu_opt
		p_menu++;
		printf("\n");
	}
		printf("\n\n");
		printf("\tOpcion: ");
		scanf("%u", &elegido);
		
	return (enum TOp) (elegido - 1); //ELEGIDO -1 PORQUE LAS ARRAYS EMPIEZAN DESDE 0
}

void title(){
	system("clear");
	system("figlet CALCULADORA");
	printf("\n\n");
}

int preg_op(const char *pregunta){
	int result;

	printf("%s: ", pregunta);
	scanf("%i", &result);

	return result;
}

int suma (int op1, int op2) { return op1 + op2; }
int rest (int op1, int op2) { return op1 - op2; }
int mult (int op1, int op2) { return op1 * op2; }
int divi (int op1, int op2) { return op1 / op2; }


int main(){
	int op1, op2, resultado;
	enum TOp chosen;
	
	title();

	chosen = elec_menu();
	op1 = preg_op("Operando 1: "); //se hizo de modo constante y asi no tengo que hacer 2 funciones o preguntar 2 veces lo mismo
	op2 = preg_op("Operando 2: ");

	resultado = (*operaciones[chosen])(op1, op2);
		    	
	/*	   **operaciones *operaciones+chosen	FUNCIONES
	 	     ______	 ______      		 ______
	            |	   |	|      |    		|      |	
	RESULTADO = |	O-----> |   O----------------> 	|  
		    |______|	|______|    		|______|
		    
	RECORDEMOS QUE CHOSEN ES LA ELECCION EN EL EL MENU, POR LO CUAL GRACIAS A ESO PODREMOS ESCOGER LA OPCION QUE QUERAMOS

	*/


	printf("Resultado = %i\n", resultado);

	return EXIT_SUCCESS;

}
