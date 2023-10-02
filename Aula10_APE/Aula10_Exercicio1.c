#include <stdio.h>
#include <math.h>
//calculadora
int main()
{
    double num1, num2;
    char operacao;
   
        printf("Digite dois numeros:\n");
        scanf("%lf %lf", &num1, &num2);

        printf("Digite o operador:(+,-,*,/)\n");
        scanf(" %c", &operacao);

       

        if (operacao == '+')
        {
            printf("%.2lf + %.2lf = %.2lf", num1, num2, num1+num2);
        }
       
        else if(operacao == '-')
        {
            printf("%.2lf - %.2lf = %.2lf", num1, num2, num1-num2);
        }

        else if(operacao == '*')
        {
            printf("%.2lf * %.2lf = %.2lf", num1, num2, num1*num2);
        }
        else if(operacao == '/')
        {
            if(num2 != 0){
                printf("%.2lf / %.2lf = %.2lf", num1, num2, num1/num2);
            }
            else{
                printf("Nenhum numero pode ser dividido por 0");
            }
        }
       
}