#include <stdio.h>
#include <string.h>

/**Contagem de caracteres em uma string**:
Escreva um programa que leia uma string do usuário e conte
quantos caracteres a string possui, excluindo o caractere nulo
de terminação '\0'. Em seguida, exiba o resultado*/
int main()

/*
   {
       char s[30];
       int i;

       printf("Digite um texto\n");
       fgets(s, 30, stdin);
       fflush(stdin);


       s[strcspn(s, "\n")] = '\0';

       printf("%s", s);

       i = strlen(s);

       printf("Tamanho do texto digitado: %d\n", i);
   }
*/

////////////////EX PROF ///////////////
{
    char str[100];

        printf("Digite uma string: ");
        fgets(str, sizeof(str), stdin);

        str[strcspn(str, "\n")] = '\0'; // para desconsiderar o caractere de nova linha

        int comprimento = strlen(str);  // -1 para desconsiderar o caractere de nova linha
        printf("A string possui %d caracteres.\n", comprimento);
}
