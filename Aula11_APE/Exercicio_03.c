#include <stdio.h>
#include <math.h>
 #define pi 3.14
int main()
{
    int opcao;
    double base, altura, raio, area;

do{
        printf("============================================\n");
        printf("          Calculadora de formas\n");
        printf("============================================\n");
        printf("Escolha uma opcao:\n 1-Triangulo\n 2-Quadrado\n 3-Circulo\n 0-Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("--------------------------------------------\n");
            printf("Informe a base e a altura do seu triangulo:\n");
            scanf("%lf %lf", &base, &altura);
            printf("--------------------------------------------\n");
                area = (base * altura)/2;
            printf("A area do seu triangulo e igual a %.2lf\n", area);
            printf("============================================\n");

            break;
        
        case 2: 
            printf("--------------------------------------------\n");
            printf("Informe a base e a altura do seu quadrado:\n");
            scanf("%lf %lf", &base, &altura);
            printf("--------------------------------------------\n");
                area = base * altura;
            printf("A area do seu quadrado e igual a %.2lf\n", area);
            printf("============================================\n");

            break;

        case 3:
            printf("--------------------------------------------\n");
            printf("Informe o raio do seu circulo:\n");
            scanf("%lf", &raio);
            printf("--------------------------------------------\n");
                area = 3.14 * pow(raio,2);
            printf("A area do seu circulo e igual a %.2lf\n", area);
            printf("============================================\n");

            break;
        case 0:
            printf("--------------------------------------------\n");
            printf("          Programa finalizado!!!\n             Volte sempre\n");
            printf("--------------------------------------------\n");
            break;

        default:
            printf("--------------------------------------------\n");
            printf("Opcao invalida");
            printf("--------------------------------------------\n");
            break;
        }
    }while(opcao != 0);
}