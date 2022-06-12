

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <cstring>
#define MAX	 4

/*CONST TO USE IN MENU*/
const char *menu[]={
	"square empty",
	"square with diagonal",
	"filled squared",
	"EXIT",
	NULL
};
/* LIST TO MENUI AND THEN USE TO WHILE LOOP */
enum list {EMPTY, DIAGONAL, FILLED, EXIT};



/* TITLE OF PROGRAM  */
void title(){
	system("clear");
	system("toilet -fpagga --metal SQUARES");
	printf("\n \n");

}
void pause(){
	printf("Pulse cualquier tecla para continuar. \n");
	getchar();
}

/*ALGORITM OF SQUARED EMPTY (NO FINISH)*/
int diameter(){
		int diameter_scan;
		printf("Diameter: ");
		scanf("%i", &diameter_scan);

	return diameter_scan;
	}



int scan_user(){
	int user_scan;
	
		printf("Choose one option: ");
		scanf("%i", &user_scan);
		__fpurge(stdin);

	return user_scan -1 ; //RETURN -1 FOR THE CONSTANT
}


/*LOOP TO PRINT MENU*/

int menu_square(){
	
	for (int i = 0; i < MAX; i++){
		printf("\t %i.- %s  \n",(i + 1), menu[i]);	
	}
	
	return scan_user();
}

/* ALGORITM SQUARED */
unsigned dimension(){
	int scan_dimension;
	
	printf("Squared dimension:  ");
	scanf("%i", &scan_dimension);
	__fpurge(stdin);
	return scan_dimension;
}

/*OPTIONS BOOL TO USE SQUAREDS*/
bool empty_return(int side, int column, int scan_dimension){
	return side == 0 || side == scan_dimension - 1 || column == 0 || column == scan_dimension - 1;
}

bool diagonal_return(int side, int column, int scan_dimension){
	return side == column || (side + column) == scan_dimension - 1  || side == 0 || side == scan_dimension-1 || column == 0 || column == scan_dimension -1;
}



/*FUNCTIONS PRINTS DIAGONAL SQUARED*/
void diagonal(){
	int scan_dimension = dimension();
	
	for (int side = 0; side <scan_dimension ; side ++){
		for (int column = 0; column < scan_dimension ; column++){
			if (diagonal_return(side, column, scan_dimension)){
				printf("* ");
			}else{
				printf("  ");
			}
		}
	printf("\n");
	}
}


/*FUNCTION PRINTS EMPTY SQUARED*/
void empty(){
	
	int scan_dimension = dimension();

	for (int side = 0; side < scan_dimension ; side ++){
		for (int column = 0; column < scan_dimension; column ++){
			if(empty_return(side, column, scan_dimension)){
				printf("* ");
			}else{
				printf("  ");
			}
		}
	printf("\n");
	}

}


/*FUNCTION PRINT FULL SQUARED*/
void full(){
	
	int scan_dimension = dimension();

	for (int side = 0; side < scan_dimension ; side ++){
		for (int column = 0; column < scan_dimension; column++){
			printf("* ");
		}
		printf("\n");
	}
}


/* FUNCTION FOR THE EXIT */
void square(){
	int option;	
	do{
	title();
	option = menu_square();

	switch(option) {
		case EMPTY:
			empty();
			pause();
		break;
		
		case DIAGONAL:
			diagonal();
			pause();
		break;

		case FILLED:
			full();
			pause();
		break;
	}
		
	}while(option != EXIT);
}




int main(){
	square();
	//elec_user();
		return EXIT_SUCCESS;

}
