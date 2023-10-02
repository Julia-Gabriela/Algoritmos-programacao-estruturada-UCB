#include <stdio.h>
#include <math.h>
//CLASSIFICACAO DE IDADE
int main(){
    int idade;

        printf("Digite sua idade\n");
        scanf("%d", &idade);

        if (idade >= 0 && idade<=12)
        {
            printf("Classificacao: Crianca\n");
        }
        else if(idade >= 13 && idade <= 19)
        {
            printf("Classificacao: Adolescente\n");
        }
        else if(idade >= 20 && idade <= 59)
        {
            printf("Classificacao: Adulto\n");
        }
        else if(idade >= 60)
        {
            printf("Classificacao: Idoso\n");
        }
           
}