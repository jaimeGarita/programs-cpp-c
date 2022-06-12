

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(){
	unsigned *num=NULL;
	unsigned pos = 0;
	unsigned vscanf;
	do{
		num = (unsigned*) realloc (num, (pos + 1) * sizeof (unsigned));
		printf("Escribre un numero hasta llegar decir a fin: ");
		vscanf=scanf("%u", (num+pos));
		pos++;

	}while( vscanf != 0);
	
	for(int i=0; i<pos; i++){
		printf("%u", *(num+i));
	}

	return EXIT_SUCCESS;

}
