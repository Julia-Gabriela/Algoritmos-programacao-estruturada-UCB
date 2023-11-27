#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 30

struct Estudante
{
    char nome[N];
    int idade;
    double notas[3];
};
typedef struct Estudante Estudante;
int main()
{
    Estudante estudante[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Informacoes do estudante %d\n", i + 1);
        printf("Digite o nome do aluno:\n");
        scanf("%50[^\n]s", estudante[i].nome);
        fflush(stdin);

        printf("Digite a idade do aluno:\n");
        scanf("%d", &estudante[i].idade);
        fflush(stdin);

        for (int x = 0; x < 3; x++)
        {
            
            printf("Digite a nota %d do aluno\n", i + 1);
            scanf("%lf", &estudante[i].notas[x]);
            fflush(stdin);
            
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Nome: %s \n", estudante[i].nome);
        printf("Idade: %d \n", estudante[i].idade);
        double soma = 0.0;
        for (int j = 0; j < 3; j++)
        {
            soma += estudante[i].notas[j];
        }
        soma /= 3;
        printf("Media Final: %.2lf\n", soma);
    }
}