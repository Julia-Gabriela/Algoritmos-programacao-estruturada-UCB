#include <stdio.h>
int main()
{
    float celsius, far;

        printf("Digite a temperatura em celsius:\n");
        scanf("%f", &celsius);

        far = (celsius * 9/5) + 32;

        printf("Temperatura em celsius: %.1f\n", celsius);
        printf("Temperatura em Fahrenheit: %.1f\n", far);


    return 0;
}