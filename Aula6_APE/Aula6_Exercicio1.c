#include <stdio.h>
int main(){
    //SEU NOME E IDADE, NOME E IDADE DE SEUS PAIS
    int idade, idadeMae, idade_Pai;
    char nome[50], nomeMae[50], nome_pai[50];

        printf("Digite seu nome e sua idade:\n");
        scanf("%s %d", &nome, &idade );

        printf("Digite o nome e idade da sua mae:\n");
        scanf("%s %d", &nomeMae, &idadeMae);

        printf("Digite o nome e idade do seu pai:\n");
        scanf("%s %d", &nome_pai, &idade_Pai);

        printf("Suas Informacoes:%s, %d anos\n", nome, idade);
        printf("Informacoes da mae:%s, %d anos\n", nomeMae, idadeMae);
        printf("Informacoes do pai:%s, %d anos\n", nome_pai, idade_Pai);

    
    return 0;
}