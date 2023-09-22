#include <stdio.h>
#include <math.h>
//FORMULA DE BHASKARA
int main()
{
double a, b, c, delta, x1, x2;

    printf("Digite os numeros a, b, c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

        delta = pow(b,2)- 4 * a * c;
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);

    printf("Delta: %lf\n", delta);
        if (delta<0){
        printf("ERRO, delta menor que 0");
        }
        else if (delta>0)
        {
        printf("X1:%.2lf\n", x1);
        printf("X2:%.2lf\n", x2);
        }
}