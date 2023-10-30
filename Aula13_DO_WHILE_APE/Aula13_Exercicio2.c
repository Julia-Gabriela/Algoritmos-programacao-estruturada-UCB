#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0, num;

    printf("Digite um numero inteiro e positivo:\n");
    scanf("%d", &num);
    do
    {
        num--;
        printf("%d\n", num);
    } while (num != 1);
}