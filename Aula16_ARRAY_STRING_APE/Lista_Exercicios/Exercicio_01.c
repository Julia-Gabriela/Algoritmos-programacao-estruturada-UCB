#include <stdio.h>
#include <string.h>
/***Soma de elementos em um array**: dado o int array[5] =
{1,2,3,4,5}, Escreva um programa que calcule a soma de todos
os elementos em um array de inteiros.*/
int main()
/*
{
    int array[5] = {1, 2, 3, 4, 5}, soma = 0;

    soma = array[0] + array[1] + array[2] + array[3] + array[4];

    printf("Soma dos array: %d", soma);
}*/

////////////////EX PROF ///////////////

{
    // indice 0 1 2 3 4
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int soma = 0;

    for (int i = 0; i < n; i++)
    {
        soma+= arr[i];
    }
    printf("Soma: %d", soma);
}