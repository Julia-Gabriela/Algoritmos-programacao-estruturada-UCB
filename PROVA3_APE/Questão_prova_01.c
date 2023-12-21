#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 50
struct Aluno
{
    char nome[N];
    int matricula;
    double nota[3];
};
typedef struct Aluno aluno;

void Inserirdados(struct Aluno aluno[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("===================Aluno %d==================\n", i + 1);
        printf("Nome do aluno: \n");
        scanf("%50[^\n]s", aluno[i].nome);
        fflush(stdin);

        printf("Matricula do aluno: \n");
        scanf("%d", &aluno[i].matricula);
        fflush(stdin);

        printf("Digite as notas do aluno:\n");
        for (int j = 0; j < 3; j++)
        {
            printf("Nota %d: ", j + 1);
            scanf("%lf", &aluno[i].nota[j]);
            fflush(stdin);
        }
    }
}

void imprimindodados(struct Aluno aluno[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("===================Aluno %d==================\n", i + 1);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Matricula: %d\n", aluno[i].matricula);
        printf("=============================================\n");
        
            for (int y = 0; y < 3; y++)
            {
                printf("Notas = %.2lf\n", aluno[i].nota[y]);
            }
        

        printf("=============================================\n");

        double soma = 0.0;
        for (int z = 0; z < 3; z++)
        {
            soma += aluno[i].nota[z];
        }
        double media = soma / 3;

        printf("Media: %.2lf\n", media);

        if (media >= 7)
        {

            printf("Aluno aprovado\n");
            printf("=============================================\n");
        }
        else if (media >= 5 && media < 7)
        {

            printf("Aluno de recuperacao\n");
            printf("=============================================\n");
        }
        else
        {

            printf("Aluno reprovado\n");
            printf("=============================================\n");
        }
    }
}

int main()
{
    aluno aluno[3];

    Inserirdados(aluno);
    imprimindodados(aluno);
}
