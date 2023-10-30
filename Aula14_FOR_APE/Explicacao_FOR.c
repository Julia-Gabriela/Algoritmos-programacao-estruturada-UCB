#include <stdio.h>
#include <math.h>
int main()
{
    int i = 1;
    // variavel de iniciação - condição - incremento ou complemento
    for (i; i <= 10; i++)
    {

        if (i == 5)
        {
            // para o programa quando atinge essa condição
            break;
        }
        if (i == 5)
        {
            // ele pula a condição e passa pra proxima
            continue;
            ;
        }
        printf("%d ", i);
    }
}