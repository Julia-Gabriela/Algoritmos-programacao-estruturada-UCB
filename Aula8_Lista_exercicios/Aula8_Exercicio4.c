#include <stdio.h>
#include <math.h>
//PERIMETRO E AREA DO RETANGULO
int main()
{

double base, altura, perimetro, area;

    printf("Digite a base e altura do retangulo que deseja calcular:\n");
    scanf("%lf %lf", &base, &altura);

        perimetro = base + base + altura + altura;
        area = base * altura;

    printf("O perimetro do retangulo e igual a %.1lf\n", perimetro);
    printf("A area do retangulo e igual a %.1lf\n", area);

}