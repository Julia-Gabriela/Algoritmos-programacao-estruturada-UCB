
#include <stdio.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");

int num, resultado;

    printf("Digite um numero inteiro e positivo:\n");
    scanf("%d", &num);

    resultado = num * 2;

    printf("O dobro do numero %d = %d\n", num, resultado);

}