#include <stdio.h>
int main()
{
    double pol, cent;

        printf("Digite uma medida em polegadas:\n");
        scanf("%lf", &pol);

        cent = pol * 2.54;

        printf("A medida de %.2lf polegadas e igual a %.2lf centimetros\n", pol, cent);

    return 0;
}