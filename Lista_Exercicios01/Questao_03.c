#include <stdio.h>
int main()
{
    float n1, n2, n3, media;

        printf("Digite duas medias nos tres bimestres:\n");
        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1 + n2 + n3) / 3;

        printf("Sua media somando as notas: %.2f, %.2f, %.2f e igual a %.2f\n", n1, n2, n3, media);

        return 0; 
    }