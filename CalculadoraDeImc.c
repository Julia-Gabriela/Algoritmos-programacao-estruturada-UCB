#include <stdio.h>
int main(){
    int idade, peso;
    float altura, imc;
    char nome[10];    
    
    printf("\n Digite seu nome:");
    fflush(stdin);
    scanf("%s", nome);

    printf("\n Seja bem vindo(a) %s", nome);

    printf("\n Digite a idade: ");
    fflush(stdin);
    scanf("%d", &idade);

    printf(" Digite a peso: ");
    fflush(stdin);
    scanf("%d", &peso);

    printf(" Digite a altura (ex: 1.60): ");
    fflush(stdin);
    scanf("%f", &altura);

    imc = peso/(altura*altura);

    printf("\n---------------------------------------------------");

    printf("\n Nome: %s", nome);
    printf("\n Idade: %d", idade);
    printf("\n Peso: %d", peso);
    printf("\n Altura: %f", altura);

    printf("\n---------------------------------------------------");

    printf("\n IMC: %f", imc);

    printf("\n---------------------------------------------------");

}