#include <stdio.h>
#include <math.h>
//IMC
int main()
{
    double peso, altura, imc;
       
        printf("Digite sua altura em metros\n");
        scanf("%lf", &altura);

        printf("Digite seu peso:\n");
        scanf("%lf", &peso);

    imc = peso / pow(altura, 2);

    if(altura > 0 && peso > 0){
        if(imc <= 18.5)
        {
            printf("Imc igual a %.2lf\n", imc);
            printf("Voce esta abaixo do seu peso ideal\n");
        }
        else if(imc>= 18.6 && imc<=24.9)
        {
            printf("Imc igual a %.2lf\n", imc);
            printf("Voce esta no seu peso ideal\n");
        }
        else if(imc>= 25 && imc<=29.9)
        {
            printf("Imc igual a %.2lf\n", imc);
            printf("Voce esta um pouco acima do seu peso ideal\n");
        }
        else if(imc>= 30 && imc<=34.9)
        {
            printf("Imc igual a %.2lf\n", imc);
            printf("Voce esta com obesidade grau I\n");
        }
        else if(imc>= 35 && imc<=39.9)
        {
            printf("Imc igual a %.2lf\n", imc);
            printf("Voce esta com obesidade grau II(severa)\n");
        }
        else if(imc>=40)
        {
            printf("Imc igual a %.2lf\n", imc);
            printf("Voce esta com obesidade grau III(Morbida)\n");
        }
    }
    else{
        printf("Peso ou Altura invalidos\n");
        printf("Digite outro peso e altura\n");
    }
}