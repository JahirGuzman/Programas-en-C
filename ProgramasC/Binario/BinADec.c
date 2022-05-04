/*Programa para pasar de binario a decirmal*/
/*Hecho por Jahir Guzman*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A1=0,c2=0,k=0,a=1,b,x=1,d=0;
	
	printf("/*PROGRAMA PARA PASAR DE BINARIO A DECIMAL*/\n\n");
	printf("INTRODUZCA LOS DATOS REQUERIDOS\n\n");
	
printf("NUNERO EN BINARIO: ");
scanf("%d",&b);

	while(b/a>=1) { k++; a*=10; }
		a/=10;

	while(A1<k){
		if((b/a%10)==1)
		
	while(k-A1-c2>1){ x*=2; c2++; }
		else x=0;
		
	d+=x;
	x=1;
	a/=10;
	c2=0;
	A1++;
}

printf("\nEL NUMERO EN DECIMAL ES: %d\n",d);

	return 0;
}