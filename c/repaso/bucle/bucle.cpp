

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(){
	int num;
	char letter = 'a';
	int par[10];
	int sum = 0;
	printf("Num: ");
	scanf("%i", &num);


for(int p=0; p<num; p++){	

	for( int i = 0; i<num; i++){
		for(int j = 0; j<num; j++){
		printf("%c",'a'+i);
		}
	}
printf("\n");
}
printf("\n");
for (int i = 0; i<10; i++){
	par[i] = i*2;
	printf(" %i", par[i]);
	
}
	par[4] = 5;

for (int i = 0; i<10; i++){
	sum += par[i];
}

	printf(" Numero %i", sum);

	return EXIT_SUCCESS;

}
