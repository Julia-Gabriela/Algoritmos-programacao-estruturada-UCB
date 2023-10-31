#include <stdio.h>
#include <math.h>

int main()
{
    int num, soma = 0;
    int i, i2, i3, par = 0, impar = 0;
    double media;

    for (i = 1; i < 7; i++)
    {
        printf("Digite a nota %d\n", i);
        scanf("%d", &num);
        soma += num;
    }

    printf("Soma dos numeros:%d\n", soma);

    for (i2 = 2; i2 <= soma; i2 += 2)
    {
        par += i2;
    }
    printf("A soma dos numeros pares e igual a %d\n", par);

    for (i3 = 1; i3 <= soma; i3 += 2)
    {
        impar += i3;
    }
    printf("A soma dos numeros impares e igual a %d\n", impar);

    media = soma / 6;
    printf("Media:%.2lf", media);
}