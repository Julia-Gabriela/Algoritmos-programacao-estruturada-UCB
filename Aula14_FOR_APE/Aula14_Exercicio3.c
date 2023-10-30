#include <stdio.h>
#include <math.h>

int main()
{

    int i = 2, soma = 0;

    for (i; i <= 50; i += 2)
    {
        soma += i;
    }
    printf("------------\n");
    printf("%d", soma);
}