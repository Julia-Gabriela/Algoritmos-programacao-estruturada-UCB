#include <stdio.h>
int main ()
{
    int hora, minuto;

    printf("Informe a hora:\n");
    scanf("%d", &hora);

    minuto = hora * 60;
   
    printf("Se passaram %.1d minutos do seu dia", minuto);

}