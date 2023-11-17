#include <stdio.h>
#include <string.h>
/**Comparação de strings**:
Escreva um programa que leia duas strings do usuário e
compare-as para determinar se são iguais ou diferentes. Exiba
o resultado da comparação*/
int main()
/*{
    char s1[30], s2[30];
    int ok;

    printf("Digite uma palavra/frase:\n");
    fgets(s1, 30, stdin);

    printf("Digite outra palavra/frase:\n");
    fgets(s2, 30, stdin);

    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    ok = strcmp(s1, s2);

    if (ok == 0)
    {
        printf("Frase identica\n");
    }
    else
    {
        printf("Frases diferentes\n");
    }
}*/

////////////////EX PROF ///////////////
{
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

        if (strcmp(str1, str2) == 0)
        {
            printf("As strings são iguais.\n");
        }
        else
        {
            printf("As strings são diferentes.\n");
        }
}

