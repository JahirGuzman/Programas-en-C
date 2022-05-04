/*PROGRAMA PARA CALCULAR SI UN NUMERO ES PRIMO*/
/*CREADO POR JAHIR SEBASTIAN GUZMAN*/

#include <stdio.h>
int esPrimo(int numero); 
int main() 
{
  int num;
  		
  	printf(" Programa para saber si un numero es primo");
  	printf("\n_____________________________________________");
  	printf("\n\n Introduzca los datos requeridos");
  	printf("\n_____________________________________________");
	printf("\n\n Numero               :");
	scanf("%d", &num);
  	printf("_____________________________________________\n");	
  		
  	
  if (esPrimo(num)) {
    printf("\n El numero es primo");
  } else {
    printf("\n El numero NO es primo");
  }
      	printf("\n______________________FIN_____________________\n\n\n");
  return 0;
}

int esPrimo(int num) {
  if (num == 0 || num == 1) return 0;

  if (num == 4) return 0;
  for (int x = 2; x < num / 2; x++) {

    if (num % x == 0) return 0;
  }
	
  return 1;
}