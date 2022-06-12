

#include <stdio.h>
#include <stdlib.h>

int main(){
	int cantidad_numeros;
	int numeros;
	int incrementar = 0;
	int sumar = 0;
	double media = 0.00;
	double numeros_media;

	printf("Indique los número para hacer la media: ");
	scanf("%i", &cantidad_numeros); //PREGUNTAMOS AL USUARIO LA CANTIDAD DE NUMEROS QUE NECESITA Y LO ALMACENAMOS EN LA VARIABLE

	for(int i = 0; i<cantidad_numeros; i++){ // ESTO CONSIGUE QUE SOLO TENGA LOS NUMEROS QUE EL USUARIO DIGA
	printf("Introduce su %iº numero: ", ++incrementar); // AQUI INCREMENTO UN NUMERO PARA QUE HAGA UN SEGUIMIENTO DE TODOS LOS NUMEROS QUE EL
							    // USUARIO QUIERE
	scanf("%i", &numeros); 
	sumar = sumar + numeros; //VAMOS ALMACENANDO LOS NUMEROS Y LOS SUMAMOS DIRECTAMENTE EN ESTA OPERACION
	}
	numeros_media = cantidad_numeros; // PASAMOS LA CANTIDAD DE NUMERO A VARIABLE DE TIPO FLOAT PARA QUE PODAMOS TENER DECIMALES

	media = sumar / numeros_media; //HACEMOS LA OPERACION DE LA MEDIA
	printf("La media es: %.2lf \n", media); // IMPRIMIMOS CON SOLO 2 DECIMALES

	return EXIT_SUCCESS;

}
