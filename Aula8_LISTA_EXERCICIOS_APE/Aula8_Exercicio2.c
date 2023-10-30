#include <stdio.h>
#include <math.h>
//CALCULANDO JUROS COMPOSTOS

int main()
{
double capital, TX_juros, anos, montante;

    printf("Informe qual o seu capital:\n");
    scanf("%lf", &capital);

    printf("Informe a taxa de juros anuais:\n");
    scanf("%lf", &TX_juros);

    printf("Informe o numero de anos da aplicacao:\n");
    scanf("%lf", &anos);

        montante = capital * pow(1+TX_juros/100, anos);

    printf("O montante e igual a %.2lf", montante);


}