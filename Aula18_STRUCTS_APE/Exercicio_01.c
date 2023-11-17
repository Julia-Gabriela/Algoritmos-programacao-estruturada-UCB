#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 50
struct Livro
{
    char titulo[N], autor[N];
    int anoPub; 
};
typedef struct Livro Livro;
int main()
{

    Livro Livro;

    printf("Insida os dados do livro\n");

    puts("Titulo: ");
    scanf("%50[^\n]s", Livro.titulo);
    fflush(stdin);

    puts("Autor: ");
    scanf("%50[^\n]s", Livro.autor);
    fflush(stdin);

    puts("Ano de lancamento: ");
    scanf("%d", &Livro.anoPub);
    fflush(stdin);

    printf("Titulo: %s \n", Livro.titulo);
    printf("Autor: %s \n", Livro.autor);
    printf("Ano: %d \n", Livro.anoPub);
}
