#include <stdio.h>

int main()
{
    int matriz[3][3];
    int i, j, y;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o numero da coluna 0 e linha %d\n", i);
        scanf("%d", &matriz[0][i]);
    }

    for (j = 0; j < 3; j++)
    {
        printf("Digite o numero da coluna 1 e linha %d\n", j);
        scanf("%d", &matriz[1][j]);
    }
    for (y = 0; y < 3; y++)
    {
        printf("Digite o numero da coluna 2 e linha %d\n", y);
        scanf("%d", &matriz[2][y]);
    }

    printf("|%d|%d|%d|\n", matriz[0][0], matriz[0][1], matriz[0][2]);
    printf("|%d|%d|%d|\n", matriz[1][0], matriz[1][1], matriz[1][2]);
    printf("|%d|%d|%d|\n", matriz[2][0], matriz[2][1], matriz[2][2]);
}
/*int main()
{
    clearScreen();
    int matriz[3][3];
    //Preenchendo a matriz
        printf("Digite os elementos da matriz3x3:\n");
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            scanf("%d", &matriz[i][j]);
    //Exibindo a matriz
        printf("\nMatriz digitada:\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            printf("%d\t", matriz[i][j]);
        printf("\n");
    }
    return 0;
}*/
