#include <stdio.h>

int main()
{
    clearScreen();
    int matriz1[2][2], matriz2[2][2], soma[2][2];
    // Preenchendo as matrizes
    printf("Digite os elementos da primeira matriz 2x2:\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            scanf("%d", &matriz1[i][j]);
    printf("Digite os elementos da segunda matriz 2x2:\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            scanf("%d", &matriz2[i][j]);
    // Realizando a soma
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
    // Exibindo a matriz resultante
    printf("\nMatriz resultante da soma:\n");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
            printf("%d\t", soma[i][j]);
        printf("\n");
    }
    return 0;
}