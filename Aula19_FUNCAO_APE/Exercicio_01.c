#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calcularMedia(int numero[], int tamanho){
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += numero[i];
    }
    return (float) soma/tamanho;
    
}
int main(){
    //int lista[] ={10,20,30,40};
    int lista[5];
    int tamanho = sizeof (lista)/ sizeof(lista[0]);

    puts("Digite as notas: ");
    for (int i = 0; i < 5; i++)
    {
        printf("Digite a nota: %d\n", i + 1);
        scanf("%d", &lista[i]);
    }
    
    float media = calcularMedia(lista,tamanho);
    printf("A media dos numeros e: %.2f\n", media);
    return 0; 
}

