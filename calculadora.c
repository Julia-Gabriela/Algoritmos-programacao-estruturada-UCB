#include <stdio.h>
int main(){

    float a, b, ad, sub, mul, div;
    int num;

    printf("\n digite um numero: ");
    scanf("%f", &a);

    printf("\n digite outro numero: ");
    scanf("%f", &b);

    printf("\n digite:\n 1 para adicao: \n 2 para subtracao: \n 3 para multiplicacao \n 4 para divisao \n ");
    scanf("%d", &num);

    switch(num)
    {
        case 1:
            ad = a+b;
            printf("%.2f mais %.2f e igual a %.2f", a, b, ad);
            break;

        case 2:
            sub = a-b;
            printf("%.2f menos %.2f e igual a %.2f", a, b, sub);
            break;

        case 3:
            mul = a*b;
            printf("%.2f vezes %.2f e igual a %.2f", a, b, mul);
            break;

        case 4:
            div = a/b;
            printf("%.2f dividido por %.2f e igual a %.2f", a, b, div);
            break;

    }
 return 0;
}

