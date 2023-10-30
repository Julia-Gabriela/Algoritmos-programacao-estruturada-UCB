#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1, fatorial = 1, num;
    for (num; num <= 0; num)
    {
        printf("Digite um numero:\n");
        scanf("%d", &num);
        if (num < 0)
        {
            printf("----------------\n");
            printf("Numero invalido!!!\n");
            printf("----------------\n");
        }
        else if (num == 0)
        {
            printf("----------------\n");
            printf("Fatorial: 1\n");
            break;
        }
    }
    for (i; i <= num; i++)
    {
        fatorial *= i;
    }
    if (num > 0)
    {
        printf("----------------\n");
        printf("Fatorial: %d", fatorial);
    }
}