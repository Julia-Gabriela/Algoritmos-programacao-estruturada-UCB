#include <stdio.h>
#include <string.h>
// definindo a structs
struct ponto
{
    int x;
    int y;
};

int main(){
    //Criando uma instancia da struct ponto
    struct ponto ponto1;

    //Atribuindo valores aos membros da struct
    ponto1.x = 10;
    ponto1.y = 20;

    //Acessando e imprimindo os valores
    printf("Coordenadas: (%d,%d)\n", ponto1.x, ponto1.y);

    return 0;
}
