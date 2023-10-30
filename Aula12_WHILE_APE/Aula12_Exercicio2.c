#include <stdio.h>
#include <math.h>
int main()
{
    int  i = 1, n1;
    double quadrado;

        printf("Digite um numero\n");
        scanf("%d", &n1);

        while(i <= n1){
            
            printf("Numero %.d\n seu quadrado %.lf\n", i, quadrado);
            i++;
            quadrado = pow(i,2);
        }
}
