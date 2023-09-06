#include <stdio.h>

int main()
{
    int idade, peso, ano, dia, mes;

    printf("----------------------------------------\n");
    printf("----------Seja bem vindo(a)!!!----------\n");
    printf("----------------------------------------\n");

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("Digite seu peso:\n");
    scanf("%d", &peso);

    printf("Digite seu ano de nascimento:\n");
    scanf("%d", &ano);

    printf("Digite o dia em que voce nasceu:\n");
    scanf("%d", &dia);

    printf("Digite o mes em que voce nasceu:\n");
    scanf("%d", &mes);

    printf("----------------------------------------\n");

    printf("\nIdade informada: %d", idade);
    printf("\nPeso informado: %d", peso);
    printf("\nAno de nascimento informado: %d", ano);
    printf("\nDia de nascimento informado: %d", dia);
    printf("\nMes de nascimento informado: %d", mes);

    return 0;
}
