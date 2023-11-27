#include <stdio.h>
#include <stdlib.h>
/*
Exercício 1: Troca de valores usando ponteiros
Escreva uma função trocarValores que recebe dois
inteiros como argumentos
e troca seus valores utilizando ponteiros.
*/

void trocarValores(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{

    int x = 5, y = 10;
    printf("Valores antes da troca: x = %d, y = %d\n", x, y);
    trocarValores(&x, &y);
    printf("Valores depois da troca: x = %d, y = %d\n", x, y);
    return 0;
}