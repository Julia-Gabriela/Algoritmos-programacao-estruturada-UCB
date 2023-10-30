#include <stdio.h>
#include <math.h>
//Verificando se o numero e positivo, negativo ou igual a 0
int main()
{
    double num;
    while(num!=-0){
        printf("---------------------------------------\n");
        printf("Caso deseje parar o programa digite -0\n");
        printf("---------------------------------------\n");
        printf("Digite um numero:\n");
        scanf("%lf", &num);

        if(num>0){
            printf("---------------------------------------\n");
            printf("O numero %.1lf e positivo\n", num);
        }
        else if(num < 0){
            printf("---------------------------------------\n");
            printf("O numero %.1lf e negativo\n", num);
        }
        else{
            printf("---------------------------------------\n");
            printf("Numero igual a 0");
        }
    }
}