#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 50
struct Aluno
{
    char nome[N];
    int idade;
    double notas[3];
};

void lerDadosAluno(struct Aluno Aluno[3])
{
        printf("=======================================\n");
    for (int i = 0; i < 3; i++)
    {
        
        printf("Digite os dados do aluno %d\n", i + 1);
        printf("=======================================\n");
        printf("Digite o nome  \n");
        scanf("%50[^\n]s", Aluno[i].nome);
        fflush(stdin);

        printf("Digite a idade\n");
        scanf("%d", &Aluno[i].idade);
        fflush(stdin);

        puts("Digite as notas: ");
        for (int j = 0; j < 3; j++)
        {
            printf("Digite a nota: %d\n", j + 1);
            scanf("%lf", &Aluno[i].notas[j]);
            fflush (stdin);
        }
        
    }
}
void imprimeDados(struct Aluno Aluno[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("=======================================\n");
        printf("Nome: %s \n", Aluno[i].nome);
        printf("idade: %d \n", Aluno[i].idade);
        for (int j = 0; j < 3; j++)
        {
            printf("Notas %d: %.lf\n", j + 1, Aluno[i].notas[j]);
        }
        double soma = 0.0;
        for (int j = 0; j < 5; j++)
        {
            soma +=Aluno[i].notas[j];
        }
        float media = soma/3;
        printf("Media: %.2f\n", media);
        
        if (media >= 7)
        {
            printf("Aluno Aprovado\n");
        }
        else if ( media >=4 && media < 7)
        {
            printf("Aluno de recuperacao\n");
        }
        else if (media < 4)
        {
            printf("Aluno Reprovado\n");
        }
        
    }
        printf("=======================================\n");

}

typedef struct Aluno Aluno;

int main()
{
    Aluno dados[3];

    lerDadosAluno(dados);
    imprimeDados(dados);
}