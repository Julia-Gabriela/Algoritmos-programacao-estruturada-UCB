#include <stdio.h>
#include <math.h>

int main()
{
    int mes;
do
{
    printf("Digite o mes que deseja consultar(1-12) e 0 para sair\n ");
    scanf("%d", &mes);
    printf("-----------------------------------\n");


        switch (mes)
        {
        case 1:
            printf("Mes 1 corresponde ao mes de Janeiro e possui 31 dias\n");        
            printf("-----------------------------------\n");

            break;

        case 2:
            printf("Mes 2 corresponde ao mes de Fevereiro e possui 28 dias\n");
            printf("-----------------------------------\n");

            break;
        
        case 3:
            printf("Mes 3 corresponde ao mes de Marco e possui 31 dias\n");
            printf("-----------------------------------\n");

            break;

        case 4:
            printf("Mes 4 corresponde ao mes de Abril e possui 30 dias\n");
            printf("-----------------------------------\n");

            break;

        case 5:
            printf("Mes 5 corresponde ao mes de Marco e possui 31 dias\n");
            printf("-----------------------------------\n");

            break;

        case 6:
            printf("Mes 6 corresponde ao mes de Junho e possui 30 dias\n");
            printf("-----------------------------------\n");

            break; 

        case 7:
            printf("Mes 7 corresponde ao mes de Julho e possui 31 dias\n");
            printf("-----------------------------------\n");

            break; 

        case 8:
            printf("Mes 8 corresponde ao mes de Agosto e possui 31 dias\n");
            printf("-----------------------------------\n");

            break;

        case 9:
            printf("Mes 9 corresponde ao mes de Setembro e possui 30 dias\n");
            printf("-----------------------------------\n");

            break;
        
        case 10:
            printf("Mes 10 corresponde ao mes de Outubro e possui 31 dias\n");
            printf("-----------------------------------\n");

            break;

        case 11:
            printf("Mes 11 corresponde ao mes de Novembro e possui 30 dias\n");
            printf("-----------------------------------\n");

            break;

        case 12:
            printf("Mes 12 corresponde ao mes de Dezembro e possui 31 dias\n");
            printf("-----------------------------------\n");

            break;

        case 0:
            printf("Volte sempre!!!\n");
            printf("-----------------------------------\n");

        default:
            printf("Opcao invalida por favor escolher outra\n");
            printf("-----------------------------------\n");

            break;
        }



} while (mes != 0);

        
}