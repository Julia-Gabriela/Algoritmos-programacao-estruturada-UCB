#include <stdio.h>
#include <math.h>
//CALCULANDO QUADRADO E CUBO:

int main()
{
double numero, quadrado, cubo;
    printf("insira um numero:\n");
    scanf("%lf", &numero);

        quadrado = pow(numero,2);
        cubo = pow(numero,3);

    printf("O quadrado de %.1lf e igual a %.1lf\n", numero, quadrado);
    printf("O cubo do numero %.1lf e igual a %.1lf\n", numero, cubo);
}