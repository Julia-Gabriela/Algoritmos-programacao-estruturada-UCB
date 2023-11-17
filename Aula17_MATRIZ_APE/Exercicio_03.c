#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int matriz[4][4];
    srand(time(NULL));
    // Preenchendo a matriz com números aleatórios
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matriz[i][j] = rand() % 11;
        }
    }

    // Exibindo a matriz
    printf("\nMatriz aleatória 4x4:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d\t", matriz[i][j]);
            printf("\n");
    }
    // Calculando e exibindo a soma de cada linhae coluna
    printf("\nSoma de cada linha:\n");
    for (int i = 0; i < 4; i++)
    {
        int somaLinha = 0;
        for (int j = 0; j < 4; j++)
        {
            somaLinha += matriz[i][j];
            printf("Linha %d: %d\n", i + 1, somaLinha);
        }
    }
    printf("\nSoma de cada coluna:\n");
    for (int j = 0; j < 4; j++)
    {
        int somaColuna = 0;
        for (int i = 0; i < 4; i++)
        {
            somaColuna += matriz[i][j];
            printf("Coluna %d: %d\n", j + 1, somaColuna);
        }
    }
    return 0;
}