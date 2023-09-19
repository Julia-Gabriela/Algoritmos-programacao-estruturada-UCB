#include <stdio.h>
int main ()
{
    float cap, tx, juros;
    int tempo;

        printf("Digite seu capital:\n");
        scanf("%f", &cap);

        printf("Digite a taxa de juros anual em porcentagem:\n");
        scanf("%f", &tx);

        printf("Digite o tempo da aplicacao:\n");
        scanf("%d", &tempo);

        juros = cap* (tx/100) * tempo;

        printf("A taxa de juros simples da aplicacao e igual a %.2f", juros);

    return 0;

    }