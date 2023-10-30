#include <stdio.h>
int main()
{
    int num1, num2, mult, div, resto;


        printf("Digite o primeiro numero:\n");
        scanf("%d", &num1);
        fflush(stdin);
        
        printf("Digite um segundo numero:\n");
        scanf("%d", &num2);
        fflush(stdin);


        mult = num1 * num2;
        div = num1 / num2;
        resto = num1 % num2;

        printf("Multiplicacao: %d\n", mult);
        printf("Divisao: %d\n", div);
        printf("Resto da divisao: %d\n", resto);
}