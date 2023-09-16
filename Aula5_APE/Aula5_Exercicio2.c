#include <stdio.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");

double comprimento, largura, area;

    printf("\nInforme as dimensões do seu terreno(Comprimento, largura)\n");
    scanf("%lf%lf", &comprimento, &largura);

    area = comprimento * largura;
    printf("--------------------------------\n");
    printf("A area do seu terreno corresponte a %.2lf metros quadrados.", area);

}
