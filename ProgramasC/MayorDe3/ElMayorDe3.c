/*PROGRAMA PARA CALCULAR EL MAYOR DE 3 NUMEROS*/
/*PROGRAMA HECHO POR JAHIR SEBASTIAN GUZMAN*/

#include <stdio.h>

	int main()
{
    float N1, N2, N3;
		
		printf("/*PROGRAMA PARA CALCULAR EL MAYOR DE 3 NUMEROS*/\n");
		printf("\nIntroduzca los datos requeridos\n\n");	
			
    printf( "\n Primer n%mero       : ", 163 );
    scanf( "%f", &N1 );
    printf( "\n Segundo n%mero      : ", 163 );
    scanf( "%f", &N2 );
    printf( "\n Tercer n%mero       : ", 163 );
    scanf( "%f", &N3 );

    if ( N1 >= N2 && N1 >= N3 )
        printf( "\n\n   El mayor es: %.1f", N1 );
    else

        if ( N2 > N3 )
            printf( "\n\n   El mayor es: %.1f", N2 );
        else
            printf( "\n\n   El mayor es: %.1f", N3 );
 
    getch(); 

    return 0;
}