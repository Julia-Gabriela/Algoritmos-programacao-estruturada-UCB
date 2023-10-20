#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0, num;

    do
    {
        printf("Digite um numero inteiro e positivo:\n");
        scanf("%d", &num);
        i+= num ;
        
    } while (num != 0);
        printf("A soma dos numeros e igual a %d", i);

}