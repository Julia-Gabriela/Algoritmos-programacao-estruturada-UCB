#include <stdio.h>
#include <math.h>
//estrutura de decisão
//verificação de aluno aprovado e reprovado
int main()
{
    double num1, num2, num3, media;

    printf("Digite suas notas dos 3 bimestres:\n");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    media = (num1 + num2 + num3)/ 3;

    if(media>=7){
        printf("---------------------------------------------\n");
        printf("Media igual a: %.2lf - Aluno aprovado\n", media);
    }
    else{
        printf("---------------------------------------------\n");
        printf("Media igual a: %.2lf - Aluno reprovado\n", media);
    }
}