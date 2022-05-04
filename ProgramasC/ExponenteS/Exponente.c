/*Programa hecho por Cesar Jahir Sebastian Guzman*/
/*Calcular la potencia de un numero*/

#include <stdio.h>

double P (double numero, int EXP);

int main ()
{
  int EXP;
  double  N;
  	
  		printf("PROGRAMA PARA CALCULAR LA POTENCIA DE UN N%ERO\n\n", 163);
  		printf("\n/*Introduzca los datos requeridos*/\n");
  		
  	printf ("\nEXPONENTE     : ");
  	scanf ("%d", &EXP);
  	printf ("\n\nN%MERO        : ", 163);
  	scanf ("%lf", &N);  
  
  	printf ("\n\nLA POTENCIA < %d > DE < %0.1f > ES: %0.2f\n\n\n", EXP, N, P (N, EXP)); 
  	
  
  return 0;
}

double P (double N, int EXP)
{
  double NTemp;
  int i;
  
  	NTemp = 1;
  for (i = 1; i <= EXP; ++i)
  {
    NTemp = NTemp * N;
  }
  return NTemp;
}