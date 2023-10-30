#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1;

    for (i; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d\n", i);
    }
}