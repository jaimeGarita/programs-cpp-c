#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <stdio_ext.h>

#include "general.h"
#include "menu.h"
#include "operaciones.h"

int main(){
	
	/*
	 ************************************
	 *DECLARACION DE VARIABLES Y CLASES *
	 ************************************
	 */

	int user;
	Operaciones Op;
	Opt opt;
	/*
	 **********************
	 * LLAMADAS A METODOS *
	 ********************** 
	 */

	opt.run();
	
	user = opt.ask_menu();

	/*
	 *******************
	 * ALGORITMIA MENU *
	 *******************
	 * */
	if(user == 1){
		Op.suma();
	}
  else 	if(user == 2){
		Op.resta();
	}
	
	else if(user == 3){
		Op.multiplicacion();
	}

	else if(user == 4){
		Op.division();
	}

	return EXIT_SUCCESS;
}
