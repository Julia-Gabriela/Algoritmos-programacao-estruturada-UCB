
#include <stdio.h>
int main()
{
 int nascimento, tempo;
 float salario;
 char nome[50], sobrenome[50];
 
    printf("Digite seu nome e sobrenome:");
    scanf("%s %s", nome, sobrenome);
 
    printf("\n---------------------------------------------");
 
    printf("\nSeja bem vindo(a) %s %s", nome, sobrenome);
 
    printf("\n---------------------------------------------");
  
    printf("\nDigite seu ano de nascimento:");
    scanf("%d", &nascimento);
 
    printf("\nDigite seus anos de trabalho:");
    scanf("%d", &tempo);
 
    printf("\nDigite seu ultimo salario:");
    scanf("%f", &salario);

    printf("\n---------------------------------------------");
   
    printf("\nDados cadastrados com sucesso:");
 
    printf("\n---------------------------------------------");
   
    printf("\nNome: %s %s", nome, sobrenome);
    printf("\nAno de nascimento: %d", nascimento);
    printf("\nTempo de trabalho: %d", tempo);
    printf("\nUltimo salario: %0.3f", salario);
 
    printf("\n---------------------------------------------");
  

}