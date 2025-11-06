#include <stdio.h>

int main(){
    float angulo = 0;
    printf("Digite o angulo : ");
    scanf("%f",&angulo);
    // Calculo : Radiana = Angulo * (pi/180)
    printf("A radiana de %f = %f",angulo,(angulo*(3.14/180)));
    return 0;
}