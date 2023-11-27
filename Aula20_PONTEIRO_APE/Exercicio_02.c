#include <stdio.h>
#include <stdlib.h>

/*
Exercício 2: Manipulação de arrays com ponteiros
Escreva uma função imprimirArray que recebe um array
de inteiros e seu tamanho,
e imprime os elementos do array utilizando ponteiros.
*/

void imprimirArray(int *arr, int tamanho)
{
    printf("Elementos do array: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", *(arr + 1));
    }
    printf("\n");
}
int main()
{
    clearScreen();
    int numeros[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    imprimirArray(numeros, tamanho);
    return 0;
}