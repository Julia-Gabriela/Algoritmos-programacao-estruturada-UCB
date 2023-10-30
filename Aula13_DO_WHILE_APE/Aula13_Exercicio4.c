#include <stdio.h>

int main()
{

    int fatorial = 1, i = 1, num;
    do
    {
        printf("Digite um numero inteiro e positivo:\n");
        scanf("%d", &num);
        if (num <=0)
        {
            printf("ERRO!!!!\n");
        }
    } while (num <= 0);
        
        
    do
    {
        fatorial *= i;
        i++;

    } while (i <= num);
    if (num = 0)
    {
        fatorial == 1;
        printf("Fatoral: %d", fatorial);
    }
    else
    {
        printf("Fatoral: %d", fatorial);
    }
}
