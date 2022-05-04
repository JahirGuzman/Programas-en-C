/*PRGRAMA PARA CALCULAR EL AREA DE UN TRIANGULO*/
/*CREADO POR CESAR JAHIR SEBASTIAN GUZMAN*/

#include <stdio.h>

int main()
{
    float a, b, c, area, p, sp;
    printf(" Programa para calcular el area de un triangulo");
    printf("\n________________________________________________");
    printf("\n\n Introduzca los datos requeridos");
    printf("\n________________________________________________");
    
    printf("\n\n Lado A       : ");
    scanf(" %f",&a);
        printf("________________________________________________");
    printf("\n\n Lado B       : ");
    scanf(" %f",&b);
        printf("________________________________________________");
    printf("\n\n Lado C       : ");
    scanf(" %f",&c);
        printf("________________________________________________");

    p = a + b + c;

    sp = (a + b + c)/2;

    area = sqrt((sp*(sp-a)*(sp-b)*(sp-c)));

    printf("\n\n     Area     Perimetro     Semiperimetro");
    printf("\n     %.1f       %.1f             %.1f",area, p, sp);
	printf("\n\n______________________FIN_______________________\n\n\n");
	
    return 0;
}
			