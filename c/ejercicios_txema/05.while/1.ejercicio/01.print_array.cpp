

#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string.h>


#define MAX 30

int main(){
char array[MAX];
int num = 0 ;

printf("Introduce una frase: ");
fgets(array, MAX, stdin);
char strlen_array = strlen(array);

while(num < strlen_array){	
	printf("%c", array[num]);
	num++;
	
}
	return EXIT_SUCCESS;

}
