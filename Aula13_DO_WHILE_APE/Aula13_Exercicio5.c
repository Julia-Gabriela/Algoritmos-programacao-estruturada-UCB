#include <stdio.h>
#include <math.h>

int main()
{
    int ano;

    printf("Digite um ano:\n");
    scanf("%d", &ano);

    if (ano % 400 == 0)
    {
        printf("O ano de %d e bissexto!!\n", ano);
    }
    else
    {
        if (ano % 4 == 0 && ano % 100 != 0)
        {
            printf("O ano de %d e bissexto!!\n", ano);
        }
        else
        {
            printf("O ano de %d nao e bissexto!!\n", ano);
        }
    }
}