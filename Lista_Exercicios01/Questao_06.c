#include <stdio.h>
int main()
{
    double n1, n2, n3, p1, p2, p3, MediaP;

        printf("Digite a nota 1 e seu respectivo peso:\n");
        scanf("%lf %lf", &n1, &p1);

        printf("Digite a nota 2 e seu respectivo peso:\n");
        scanf("%lf %lf", &n2, &p2);

        printf("Digite a nota 3 e seu respectivo peso:\n");
        scanf("%lf %lf", &n3, &p3);

        MediaP = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

        printf("A media ponderada das notas e igual a: %.2lf\n", MediaP);


    return 0;

}