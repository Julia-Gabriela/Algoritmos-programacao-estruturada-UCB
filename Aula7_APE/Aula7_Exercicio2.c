#include <stdio.h>
int main()
{
    int num1, num2, num3, soma, sub, mult;

        printf("Digite 3 numeros:\n");
        scanf("%d %d %d", &num1, &num2, &num3);
        fflush(stdin);

        soma = num1 + num2 + num3;
        mult= num1 * num2;
        sub = (num1 + num2) - num3;

        printf("A soma de todos os numeros e igual a %d\n", soma);
        printf("O resultado da operacao e: %d\n", mult / num3);
        printf("A diferenca entre o terceiro numero e a soma dos demais e igual a %d\n", sub);

} 