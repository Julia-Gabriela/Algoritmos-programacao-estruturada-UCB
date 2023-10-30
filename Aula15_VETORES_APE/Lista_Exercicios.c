#include <stdio.h>

int main()
{
    int certo = 0, errado = 0;
    char questao;

    {
        printf("===================================================================\n");
        printf("============================ Questao 1 ============================\n");
        printf("Qual e a sintexe correta para declarar uma variavel inteira em c?\n");
        printf("(A) int x;\n");
        printf("(B) var x;\n");
        printf("(C) integer x;\n");
        printf("(D) numero x;\n");

        scanf(" %c", &questao);

        if (questao == 'a' || questao == 'A')
        {
            printf("Resposta correta\n");
            certo++;
        }
        else if (questao != 'a' || questao != 'A')
        {
            printf("Resposta errada\n");
            errado++;
        }
        printf("===================================================================\n");
        printf("============================ Questao 2 ============================\n");
        printf("Qual e a funcao usada para imprimir no console em c?\n");
        printf("(A) print();\n");
        printf("(B) console.log ();\n");
        printf("(C) printtext ();\n");
        printf("(D) printf();\n");

        scanf(" %c", &questao);

        if (questao == 'd' || questao == 'D')
        {
            printf("Resposta correta\n");
            certo++;
        }
        else if (questao != 'd' || questao != 'D')
        {
            printf("Resposta errada\n");
            errado++;
        }
        printf("===================================================================\n");
        printf("============================ Questao 3 ============================\n");
        printf("O que o operador '==' faz em C?\n");
        printf("(A) Atribui um valor a uma variavel.\n");
        printf("(B) Compara dois valores.\n");
        printf("(C) Divide dois valores.\n");
        printf("(D) Multiplica dois valores.\n");

        scanf(" %c", &questao);

        if (questao == 'b' || questao == 'B')
        {
            printf("Resposta correta\n");
            certo++;
        }
        else if (questao != 'b' || questao != 'B')
        {
            printf("Resposta errada\n");
            errado++;
        }
        printf("===================================================================\n");
        printf("============================ Questao 4 ============================\n");
        printf("Qual e o operador logico para'OU' em C?\n");
        printf("(A) &&\n");
        printf("(B) ||\n");
        printf("(C) !\n");
        printf("(D) <>\n");

        scanf(" %c", &questao);

        if (questao == 'b' || questao == 'B')
        {
            printf("Resposta correta\n");
            certo++;
        }
        else if (questao != 'b' || questao != 'B')
        {
            printf("Resposta errada\n");
            errado++;
        }
        printf("===================================================================\n");
        printf("============================ Questao 5 ============================\n");
        printf("Qual e a estrutura de controle usada para repeticao em C?\n");
        printf("(A) if\n");
        printf("(B) switch\n");
        printf("(C) for\n");
        printf("(D) else\n");

        scanf(" %c", &questao);

        if (questao == 'c' || questao == 'C')
        {
            printf("Resposta correta\n");
            certo++;
        }
        else if (questao != 'c' || questao != 'C')
        {
            printf("Resposta errada\n");
            errado++;
        }
        printf("===================================================================\n");
        printf("============================ Questao 6 ============================\n");
        printf("Qual e a funcao usada para ler um numero inteiro do teclado em C?\n");
        printf("(A) read_integer();\n");
        printf("(B) input_int();\n");
        printf("(C) scanf();\n");
        printf("(D) get_int();\n");

        scanf(" %c", &questao);

        if (questao == 'c' || questao == 'C')
        {
            printf("Resposta correta\n");
            certo++;
        }
        else if (questao != 'c' || questao != 'C')
        {
            printf("Resposta errada\n");
            errado++;
        }
        printf("===================================================================\n");
        printf("============================ Questao 7 ============================\n");
        printf("Qual e o valor da expressao 5 + 3 * 2 em C?\n");
        printf("(A) 16\n");
        printf("(B) 11\n");
        printf("(C) 13\n");
        printf("(D) 10\n");

        scanf(" %c", &questao);

        if (questao == 'b' || questao == 'B')
        {
            printf("Resposta correta\n");
            certo++;
        }
        else if (questao != 'b' || questao != 'B')
        {
            printf("Resposta errada\n");
            errado++;
        }
    }
    printf("===================================================================\n");
    printf("Voce acertou %d questoes\n", certo);
    printf("Voce errou %d questoes\n", errado);
    printf("===================================================================\n");
}