#include <stdio.h>
#include <math.h>

int main()
{
    int dia;
do
{
        printf("============================================\n");
        printf("          Dia Util \n");
        printf("============================================\n"); 

        printf("Digite:\n 1-Segunda  2-Terca  3-Quarta\n 4-Quinta   5-Sexta   6-Sabado\n 7-Domigo   0-Sair\n");
        printf("--------------------------------------------\n");
        scanf("%d", &dia);
        printf("--------------------------------------------\n");
        switch (dia)
        {
        case 1: case 2: case 3: case 4: case 5:
            printf("O dia da semana e Util\n");

            break;
        
        case 6: case 7:
            printf("E final de semana\n");

            break;

        case 0:
            printf("          Programa finalizado!!!\n             Volte sempre\n");
            printf("--------------------------------------------\n");

            break;

        default:
            printf("Opcao invalida!!!\nEscolha outra opcao\n");
            printf("--------------------------------------------\n");
            break;
        }   
    } while (dia != 0);
}