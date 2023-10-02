#include <stdio.h>
#include <math.h>
//CONVERSAO DE TEMPERATURA
int main(){
    double temp, f, k;
    char convers;
       
        printf("Digite uma temperatura em celsius:\n");
        scanf("%lf", &temp);

        printf("Deseja converter para Fahrenheit ou Kelvin(F ou K)\n");
        scanf(" %c", &convers);

        if(convers == 'f' || convers == 'F')
        {
            f = (temp * 9/5) + 32;
            printf("A temperatudra %.1lf em celsius e igual a %.1lf Fahrenheit\n", temp, f);
        }
        else if(convers == 'k' || convers == 'K')
        {
            k = (temp + 273.15);
            printf("A temperatudra %.1lf em celsius e igual a %.2lf Kelvin\n", temp, k);
        }
}