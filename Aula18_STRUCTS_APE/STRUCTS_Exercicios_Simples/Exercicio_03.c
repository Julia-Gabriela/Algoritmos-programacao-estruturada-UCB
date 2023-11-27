#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 30

struct Pessoa{
    char nome[N];
    int idade;
    double altura;
};
typedef struct Pessoa Pessoa;
int main()
{
    Pessoa pessoa;

    printf("Digite seu nome\n");
    scanf("%30[^\n]s", pessoa.nome);
    fflush(stdin);

    printf("Digite sua idade:\n");
    scanf("%d", &pessoa.idade);
    fflush(stdin);

    printf("Digite sua altura\n");
    scanf("%lf", &pessoa.altura);
    fflush(stdin);

    printf("Nome: %s \n", pessoa.nome);
    printf("AIdade: %d \n", pessoa.idade);
    printf("Altura: %.2lf \n", pessoa.altura);

    return 0;
}
