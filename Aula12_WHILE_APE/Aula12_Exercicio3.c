#include <stdio.h>
#include <math.h>
int main()
{
    double n1, n2, soma ;
    
       
            while(n1 > 0 && n2 > 0){
            printf("Digite um numero\n");
            scanf("%lf", &n1);
            if(n1 < 0){
                break;
            }
            printf("Digite um numero\n");
            scanf("%lf", &n2);
            if(n2 < 0){
                break;
            }
            soma = n1 + n2;

            printf("Soma igual:%.lf\n", soma);
            
        }
 }
    