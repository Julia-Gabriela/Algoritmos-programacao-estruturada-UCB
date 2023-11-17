#include <stdio.h>
#include <string.h>
/**Concatenação de strings**:
Escreva um programa que leia duas strings do usuário e
concatene-as em uma terceira string. Em seguida, exiba a
string resultante.*/
int main()
    /*{
        char s1[20], s2[20];

        printf("Juntando duas frases\n");
        printf("Digite uma palavra/frase:\n");
        fgets(s1, 20, stdin);
        fflush(stdin);

        printf("Digite outra palavra/frase:\n");
        fgets(s2, 20, stdin);
        fflush(stdin);

        strcat(s1, s2);
        printf("==============================\n");
        puts(s1);
    }*/


    ////////////////EX PROF ///////////////
    {
    char str1[100], str2[100], resultado[200];
        printf("Digite a primeira string: ");
        fgets(str1, sizeof(str1), stdin);

        printf("Digite a segunda string: ");
        fgets(str2, sizeof(str2), stdin);

        strcpy(resultado, str1);
        strcat(resultado, str2);

        printf("String concatenada: %s", resultado);
    }