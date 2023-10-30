#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int numAleatorio = rand() % 100 + 1;
    int num, i = 1;

    do
    {
        printf("------------------------------------------\n");
        printf("Tente adivinhar o numero de 1 a 100 (15 chances)\n");
        scanf("%d", &num);
        i++;
        if (num > numAleatorio && num != numAleatorio)
        {
            printf("O numero e menor que o digitado\n");
        }
        else if (num < numAleatorio && num != numAleatorio)
        {
            printf("O numero e maior que o digitado\n");
        }
        printf("%d\n", numAleatorio);
    } while (num != numAleatorio && i <= 15);

    if (i == 5 && num != numAleatorio)
    {
        printf("------------------------------------------\n");
        printf("Voce atingiu o numero maximo de tentativas\n");
        printf("------------------------------------------\n");
    }
    else if (num == numAleatorio && i <= 15)
    {

        printf("------------------------------------------\n");
        printf("Parabens voce acertou\n");
        printf("Voce acertou depois de %d tentativas\n", i);
        printf("-----------------------------------------\n");
    }
}