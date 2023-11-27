#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 30

struct Estudante{
    char nome[N];
    int idade;
    double notas[3], media;
};
typedef struct Estudante Estudante;
int main()
{
    Estudante estudante;

    printf("Digite o nome do aluno:\n");
    scanf("%50[^\n]s", estudante.nome);
    fflush(stdin);

    printf("Digite a idade do aluno:\n");
    scanf("%d", &estudante.idade);
    fflush(stdin);

    for(int i = 0; i<3; i++){
        printf("Digite a nota %d do aluno\n", i + 1);
        scanf("%lf", &estudante.notas[i]);
        fflush(stdin);
    }

    printf("Nome: %s \n", estudante.nome);
    printf("Idade: %d \n", estudante.idade);
    for(int i = 0; i<3; i++){
    printf("Nota %d = %.1lf\n", i + 1, estudante.notas[i]);
    }
    estudante.media = (estudante.notas[0] + estudante.notas[1] + estudante.notas[2])/3;
    printf("Media do estudante: %.2lf\n", estudante.media);
}