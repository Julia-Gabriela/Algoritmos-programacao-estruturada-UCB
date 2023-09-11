#include <stdio.h>
int main()
{
    float salMin, salario, vezes;

    salMin = 1320;

    printf("Digite o valor do seu salario\n");
    scanf("%f", &salario);

    vezes = salario / salMin;

    printf("Seu salario de %.2f representa: %.1f salarios minimos!!!\n", salario, vezes);
        

        
}