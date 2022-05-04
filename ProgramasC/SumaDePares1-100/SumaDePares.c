/*PROGRAMA PARA CALCULAR lOS PARES COMPRENDIDOS ENTRE EL 1 Y EL 100*/
/*PROGRAMA HECHO POR JAHIR SEBASTIAN GUZMAN*/

#include <stdio.h>

int main(){
	
    int i,s=0;
    
    printf(" Programa para sumar numeros pares del 1 al 100");
    printf("\n_______________________________________________\n");
    
    
    for(i=0;i<=100;i=i+2){
    	
        printf(" %d + ",i);
        s = s +i;
        
    }
	printf("\n_______________________________________________");
    printf("\n\n La suma de los pares es: %d ",s);
    printf("\n\n______________________FIN______________________\n\n\n\n");
   return 0;
}
