#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 50
struct Livro
{
    char titulo[N], autor[N];
    int anoPub;
    float avaliacao[5];
};

typedef struct Livro Livro;
int main()
{

    Livro Livro[3];

    for (int i = 0; i < 3; i++)
    {
        printf("=================================\n");
        printf("Insida os dados do livro\n");
        printf("=================================\n");

        printf("Titulo:");
        scanf("%50[^\n]s", Livro[i].titulo);
        fflush(stdin);

        printf("Autor:");
        scanf("%50[^\n]s", Livro[i].autor);
        fflush(stdin);

        printf("Ano de lancamento:");
        scanf("%d", &Livro[i].anoPub);
        fflush(stdin);

        printf("Como voce avalia esse livro(0 a 10)\n");
        for (int x = 0; x < 5; x++)
        {
            printf("Nota %d?\n", x + 1);
            scanf("%f", &Livro[i].avaliacao[x]);
            fflush(stdin);
        }

        printf("=================================\n");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("=================================\n");
        printf("Titulo: %s \n", Livro[i].titulo);
        printf("Autor: %s \n", Livro[i].autor);
        printf("Ano: %d \n", Livro[i].anoPub);

        double soma = 0.0;
        for (int j = 0; j < 5; j++)
        {
            soma +=Livro[i].avaliacao[j];
        }
        soma /= 5;
        printf("Avaliacao: %.2f\n", soma / 2);
    }
}