#include <stdio.h>
#include <math.h>
//DISTANCIA ENTRE DOIS PONTOS
int main()
{
double x1, y1, x2, y2, distancia;

    printf("Digite as cordenadas x e y do primeiro ponto:\n");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite as cordenadas x e y do segundo ponto:\n");
    scanf("%lf %lf", &x2, &y2);

        distancia = sqrt (pow((x2-x1),2) + pow((y2-y1),2));

    printf("Distancia entre dois pontos: %.lf", distancia);

}