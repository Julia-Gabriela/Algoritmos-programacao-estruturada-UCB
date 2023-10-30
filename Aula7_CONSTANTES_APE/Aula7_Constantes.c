#include <stdio.h>

#define ida 19
#define pes 64.5
#define gen 'F'
#define altu 1.72

int main()
{
    int idade = ida;
    float peso = pes;
    double altura = altu;
    char genero = gen;


        printf("idade:%d\n",idade);
        printf("peso:%.2f\n", peso);
        printf("altura:%.2lf\n", altura);
        printf("genero:%c\n", genero);


    return 0;
}