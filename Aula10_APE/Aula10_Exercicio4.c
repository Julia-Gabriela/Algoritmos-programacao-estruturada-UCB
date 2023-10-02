#include <math.h>
//CAIXA ELETRONICO
#define saldoTotal 3000
int main()
{
    double saldo = saldoTotal, saque, restante;

        printf("Informe o valor que deseja sacar:\n");
        scanf("%lf", &saque);

        if(saque <= saldo)
        {
            restante = saldo - saque;
            printf("-------------------------------------\n");
            printf("Transicao Aceita\n");
            printf("-------------------------------------\n");
            printf("Valor sacado: %.2lf\n", saque);
            printf("Saldo restante: %.2lf\n", restante);
            printf("-------------------------------------\n");
        }
        else if(saque > saldo)
        {
            printf("-------------------------------------\n");
            printf("Transicao Negada\n");
            printf("-------------------------------------\n");
            printf("Seu saldo de %.lf e insulficiente para essa transicao.\n", saldo);
            printf("-------------------------------------\n");
        }
}