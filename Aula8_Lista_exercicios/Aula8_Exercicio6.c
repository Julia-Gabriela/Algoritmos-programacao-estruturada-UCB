#include <stdio.h>
#include <math.h>
//CALCULANDO O TEMPO QUE RESTA EM MINUTOS DO DIA
int main()
{
double hora, min, H_min, restoM, restoH;

    printf("Digite a hora e os minutos atuais:\n");
     scanf("%lf %lf", &hora, &min);

        H_min = hora * 60;
        restoM = 1440 - (H_min + min);
        restoH = restoM / 60;

    printf("Restam %.lf minutos do seu dia\n", restoM);
    printf("Restam %.lf Horas do seu dia\n", restoH);
}