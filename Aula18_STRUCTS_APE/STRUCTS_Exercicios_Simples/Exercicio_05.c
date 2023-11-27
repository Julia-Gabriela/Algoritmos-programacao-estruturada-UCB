#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 50
struct Funcionario{
    char nome[N];
    int idade;
    double salario;
};

typedef struct Funcionario Funcionario;

int main()
{
    Funcionario funcionario;

    printf("Digite o nome do funcionario:\n");
    scanf("%50[^\n]s", funcionario.nome);
    fflush(stdin);

    printf("Digite a idade do funcionario:\n");
    scanf("%d", &funcionario.idade);
    fflush(stdin);

    printf("Digite o salario desse funcionario:\n");
    scanf("%lf", &funcionario.salario);
    fflush(stdin);

    printf("Nome: %s\n", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Salario: %.2lf\n", funcionario.salario);
}