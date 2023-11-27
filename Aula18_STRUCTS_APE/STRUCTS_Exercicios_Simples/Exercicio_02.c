#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 30
struct Retangulo{
    int largura, altura, area;
};
typedef struct Retangulo Retangulo;
int main()
{
    Retangulo Retangulo;

    printf("Insira a largura do retangulo\n");
    scanf("%d", &Retangulo.largura);
    fflush(stdin);

    printf("Insira a altura do retangulo\n");
    scanf("%d", &Retangulo.altura);
    fflush(stdin);

    Retangulo.area = Retangulo.largura * Retangulo.altura;
    printf("Largura:%d\nAltura:%d\n", Retangulo.largura, Retangulo.altura);
    printf("Area do Retangulo igual a %d\n", Retangulo.area);

    return 0;
}