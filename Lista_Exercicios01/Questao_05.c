#include <stdio.h>
int main()
{
    double dol, txconv, resultado;
    char nomeMoeda[50];

        printf("Para qual moeda deseja converter?(ex:Euro, real, etc...)\n");
        scanf("%s", &nomeMoeda);

        printf("Qual o valor em dolares deseja converter?\n");
        scanf("%lf", &dol);

        printf("Qual a taxa de conversao?\n");
        scanf("%lf", &txconv);

        resultado = dol * txconv;

        printf("O valor %.2lf dolares em %s e igual a %.2lf\n", dol, nomeMoeda, resultado);

    return 0;

}