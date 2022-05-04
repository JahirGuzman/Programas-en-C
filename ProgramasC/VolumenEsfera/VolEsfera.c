/*PROGRAMA PARA CALCULAR EL VOLUMEN Y AREA DE UNA ESFERA*/
/*CREADO POR JAHIR SEBASTIAN GUZMAN*/

#include <stdio.h>

int main() {

float R, VE, AE;


	printf("__Programa para calcular area y volumen de una esfera__\n");
	printf("_______________________________________________________\n");
	printf("\n        Ingrese los datos requeridos     \n");
	printf("_______________________________________________________\n");
	
	printf("\n        Ingrese el radio de la esfera            :");
	scanf("%f", &R);
	printf("_______________________________________________________\n");
	
	VE = 1.333 * 3.1416 * R * R * R;
	AE = 4 * 3.1416 * R * R;
	
	printf("\n        El volumen de la esfera es               :%.1f", VE);
	printf("\n_______________________________________________________\n");
	
	printf("\n        El area de la esfera es                  :%.1f", AE);
	printf("\n\n___________________________FIN_________________________\n\n\n\n");
	
	return(0);
	
}