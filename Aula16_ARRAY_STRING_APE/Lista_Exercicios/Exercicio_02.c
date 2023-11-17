#include <stdio.h>
#include <string.h>
/***Média de elementos em um array**:dado o float array[] =
{1.5, 2.5, 3.5, 4.5, 5.5} Escreva um programa que calcule a
média dos elementos em um array de ponto flutuante.*/
int main()
/*{
    float array[5] = {1.5, 2.5, 3.5, 4.5, 5.5}, soma = 0, media = 0;

    soma = array[0] + array[1] + array[2] + array[3] + array[4];

    media = soma / 5;

    printf("Media dos numeros do array: %.2lf", media);
}*/
/////////////////EX PROF ///////////////
{
    float array[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
    int n = sizeof(array) / sizeof(array[0]);
    float soma = 0, media = 0;

    for (int i = 0; i < n; i++)
    {
        soma+=array[i];
    }
    media = soma/n;

    printf("Media dos elementos:%.2lf", media);
}
