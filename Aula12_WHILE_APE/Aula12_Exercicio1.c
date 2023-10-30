#include <stdio.h>
#include <math.h>
int main()
{
    int i = 2, n1;

    printf("Digite um numero\n");
    scanf("%d", &n1);

    while (i <= n1)
    {

        printf("\n%d", i);
        i += 2;
    }
}
