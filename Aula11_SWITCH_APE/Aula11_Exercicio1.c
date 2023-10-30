#include <stdio.h>
#include <math.h>

//switch case

int main()
{
    double num1, num2, resultado;
    int op;
    do{
        printf("-----------------------------------\n");
        printf("Selecione a operacao desejada:\n 1 - Soma\n 2 - Subtracao\n 3 - Multiplicacao\n 4 - Divisao\n 5-para sair\n");
        scanf("%d", &op);
        printf("-----------------------------------\n");

        switch (op)
        {
        case 1:
                printf("Digite os numeros que deseja somar\n");
                scanf("%lf %lf", &num1, &num2);
                printf("-----------------------------------\n");
                    resultado = num1 + num2;
                printf("A soma dos numeros %.2lf e %.2lf e igual a %.2lf\n", num1, num2, resultado);
            break;
        
        case 2:
                printf("Digite os numeros que deseja subtrair\n");
                scanf("%lf %lf", &num1, &num2);
                printf("-----------------------------------\n");
                    resultado = num1 - num2;
                printf("A subtracao dos numeros %.2lf e %.2lf e igual a %.2lf\n", num1, num2, resultado);
            break;

        case 3:
                printf("Digite os numeros que deseja multiplicar\n");
                scanf("%lf %lf", &num1, &num2);
                printf("-----------------------------------\n");
                    resultado = num1 * num2;
                printf("A multiplicacao dos numeros %.2lf e %.2lf e igual a %.2lf\n", num1, num2, resultado);            
            break;

        case 4:
                printf("Digite os numeros que deseja dividir\n");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0)
                {
                    printf("-----------------------------------\n");
                    resultado = num1 / num2;
                    printf("A divisao dos numeros %.2lf e %.2lf e igual a %.2lf\n", num1, num2, resultado);
                }
                else{
                    printf("-----------------------------------\n");
                    printf("Nao existe divisao por zero\n");
                }
                
            break;  
        case 5:
            printf("-----------------------------------\n");
            printf("Volte sempre!!");
            break; 

        default:
            printf("-----------------------------------\n");
            printf("Opcao invalida\n");
            printf("-----------------------------------\n");
            break;
        }
    }while (op != 5);
    
    
}