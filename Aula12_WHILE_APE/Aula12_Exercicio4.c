#include <stdio.h>
#include <math.h>
int main(){
    int  i = 1, n1, divisor;
    

        printf("Digite um numero\n");
        scanf("%d", &n1);

        while(i <= n1){
            if (n1 % i == 0)
            {
                divisor = i;
                printf("Divisor: %d\n", divisor);
            }
            i++;   
            
        }

}

    
    
