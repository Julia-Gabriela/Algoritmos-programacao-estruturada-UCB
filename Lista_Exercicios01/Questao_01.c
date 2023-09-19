#include <stdio.h>
int main ()
{
    float num1, num2, adi, sub, mult, div;

        printf("Digite o primeiro numero:\n");
        scanf("%f", &num1);

        printf("Digite o segundo numero:\n");
        scanf("%f", &num2);

        adi = num1 + num2;
        sub = num1 - num2;
        mult = num1 * num2;
        div = num1 / num2;

        printf("Soma = %.2f\n", adi);
        printf("Subtracao = %.2f\n", sub);
        printf("Multiplicacao = %.2f\n", mult);
        printf("Divisao = %.2f\n", div);

    return 0;
}