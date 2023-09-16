#include <stdio.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");

// variaveis
double nota1, nota2, nota3, MediaFinal;

    //Coletando os dados do usuario

    printf("Digite sua nota do primeiro bimestre:\n");
    scanf("%lf", &nota1);

    printf("Digite sua nota do segundo bimestre:\n");
    scanf("%lf", &nota2);

    printf("Digite sua nota do terceiro bimestre:\n");
    scanf("%lf", &nota3);

    printf("===============================================\n");

    //calcular a média final
    MediaFinal = (nota1 + nota2 + nota3)/ 3;

    //resultado final da média
    printf("Media final do usuario: %.2lf\n", MediaFinal);
}