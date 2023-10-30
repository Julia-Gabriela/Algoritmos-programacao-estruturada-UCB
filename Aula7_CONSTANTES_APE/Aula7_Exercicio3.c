#include <stdio.h>
int main()
{
    int num1, num2, num3, expressao;

        printf("Digite 3 numeros inteiros:\n");
        scanf("%d %d %d", &num1, &num2, &num3);

        expressao = ((num1 * num2 - num3) + num2) / num3;

        printf("O valor da expressao ((%d * %d - %d)+ %d)/ %d e igual a %d\n", num1, num2, num3, num2, num3, expressao);


}