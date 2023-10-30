#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0, num, mult;
    
    printf("Digite um numero que deseja saber a tabuada:\n");
    scanf("%d", &num);

    for (i; i <= 10; i++)
    {
        mult = num * i;
        printf("A tabuada do numero %d x %d = %d \n", num, i, mult);
    }
}