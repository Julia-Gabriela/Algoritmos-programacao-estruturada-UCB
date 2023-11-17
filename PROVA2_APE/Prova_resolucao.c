#include <stdio.h>
/*
int main()
{
    int i = 0, num[6], soma = 0, par = 0, impar = 0;
    double media = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Digite a nota %d\n", i + 1);
        scanf("%d", &num[i]);
        soma += num[i];
    }
    printf("Soma: %d\n", soma);
    printf("Numeros digitados:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d", num[i]);
    }
    for (i = 2; i <= soma; i += 2)
    {
        par += i;
    }
    printf("Soma dos numeros pares: %d\n", par);
    for (i = 1; i <= soma; i += 2)
    {
        impar += i;
    }
    printf("Soma dos numeros impares: %d\n", impar);
    media = soma / 6;
    printf("Media: %.2lf", media);
}
*/
int main()
{
    int i = 0, num[6], soma = 0, par = 0, impar = 0;
    double media = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Digite a nota %d\n", i + 1);
        scanf("%d", &num[i]);
        soma += num[i];
    }

    printf("Numeros digitados:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\nSoma: %d\n", soma);
    for (i = 0; i <= soma; i++)
    {
        if (i % 2 == 0)
        {
            par += i;
        }
        else
        {
            impar += i;
        }
    }
    printf("soma dos pares: %d\n", par);
    printf("Soma dos impares: %d\n", impar);
    printf("Media:%d", soma / 6);
}
