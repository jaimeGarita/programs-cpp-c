#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#include "cabecera.h"

void div1( unsigned num_user){

	if(num_user>0){
		//CALL THE FUNCTION AGAIN TO SAVE CODE
		div1( num_user / 2 );
		/*
		 * EXAMPLE:
		 * THIS DOES THE SAME THING AS CALLING THE FUNCTION ABOVE
		 *
		 * 	int div[i];
		 * 	int num;
		 *
		 * 	for (int i = 0; i<MAX;i++);
		 * 		div[i] = num;
		 * 		num = num/2;
		 */		 

		printf("%u", num_user % 2);
	}
}
