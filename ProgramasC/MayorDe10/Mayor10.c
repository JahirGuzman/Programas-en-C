/*PROGRAMA PARA CALCULAR EL MAYOR DE 10 NUMEROS*/
/*PROGRAMA HECHO POR JAHIR SEBASTIAN GUZMAN*/

#include<stdio.h>
int main() {
	
	int contador, mayor, N;
	
	mayor = 0;
	
	printf(" Programa para calcular el mayor de 10 numeros");
	printf("\n______________________________________________");
	printf("\n\n Ingrese los datos requeridos");
	printf("\n______________________________________________");
	
	for (contador=1;contador<=10;contador+=1) {
		printf("\n\n Ingrese Numero %i : ",contador);
		scanf("%i",&N);
	printf("______________________________________________");
		if (mayor < N) {
			mayor = N;
		}
	}
	
	printf("\n\n El Mayor es : %i",mayor);
	printf("\n___________________FIN________________________\n\n\n");
	
	return 0;
}