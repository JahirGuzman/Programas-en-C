/*PROGRAMA PARA CALCULAR NUMEROS IMPARES*/
/*PROGRAMA HECHO POR JAHIR SEBASTIAN GUZMAN*/

#include <stdio.h>

	int main()
{
    long F = 0;
    long I = 1;
    long contador = 0;
    long suma = 0;

    	printf(" PROGRAMA PARA SUMAR NUMEROS IMPARES");
    	printf("\n_____________________________________");
    	printf("\n\n   Ingrese los datos requeridos");
    	printf("\n_____________________________________");
    	
    printf("\n\n     Hasta que numero llegar     :");
    scanf("%ld",&F);
		printf("_____________________________________");
		
    suma = 0;
    contador=I;
    while( contador<= F ) {
        if( contador%2 != 0 ) {
            suma+=contador;
        }
        contador++;
    }
    printf("\n\n     La suma de los impares es   :%ld\n",suma);
    	
    	printf("\n\n_________________FIN_________________");

    return 0;
}