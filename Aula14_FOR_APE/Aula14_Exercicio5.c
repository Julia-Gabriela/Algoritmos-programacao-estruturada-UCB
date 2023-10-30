#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1, soma = 0;
    for (i; i <= 100; i += 2)
    {
        soma += i;
    }
    printf("Soma dos numeros impares:%d\n", soma);
}