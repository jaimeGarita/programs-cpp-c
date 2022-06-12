#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

//TEST
#include "cabecera.h"

unsigned user_num(unsigned num_user){

	//ASK USER ONE NUMBER AND THEN USE THIS FOR PASS TO BINARY

	printf("introduce un numero para pasar a binario: ");
	scanf("%u", &num_user);

	return num_user;
}
