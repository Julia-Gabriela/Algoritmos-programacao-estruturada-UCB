#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 50

struct Carro
{
    char marca[N], modelo[N];
    int ano;
    double preco;
};
typedef struct Carro Carro;
int main()
{
    
    Carro carro[3];

    for (int i = 0; i < 3; i++)
    {
        printf("============================================\n");
        printf("Digite a marca do carro:\n");
        scanf("%50[^\n]s", carro[i].marca);
        fflush(stdin);

        printf("Digite o modelo do carro:\n");
        scanf("%50[^\n]s", carro[i].modelo);
        fflush(stdin);

        printf("Digite o ano de fabricacao do carro:\n");
        scanf("%d", &carro[i].ano);
        fflush(stdin);

        printf("Digite o preco do carro:\n");
        scanf("%lf", &carro[i].preco);
        fflush(stdin);
        printf("============================================\n");
    }
    for (int i = 0; i < 3; i++)
    {
        printf("============================================\n");
        printf("Carro %d\n", i + 1);
        printf("Marca: %s\n", carro[i].marca);
        printf("Modelo: %s\n", carro[i].modelo);
        printf("Ano de fabricacao: %d\n", carro[i].ano);
        printf("Preco: %.1lf\n", carro[i].preco);
        printf("============================================\n");
    }
}