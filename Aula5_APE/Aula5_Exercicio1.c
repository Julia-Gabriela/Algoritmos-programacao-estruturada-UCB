#include <stdio.h>
#include <locale.h>

int main()
{
//permite colocar acentos, virgula, etc
setlocale(LC_ALL, "Portuguese");

// variaveis
double celsius, f, kelvin;

    //Coletando dados
    printf("Digite a temperatura em Celsius:\n");
    scanf("%lf", &celsius);
    //Calculos/ conversões
    kelvin = (celsius + 273.15);
    f = (celsius * 9/5) + 32;  

    //decoração
    printf("--------------------------------\n");

    //Resultados
    printf(" Temperaturas\n Celsius:%.1lf\n Fahrenheit:%.1lf\n Kelvin:%.1lf\n", celsius, f, kelvin);

}