#include <stdio.h>

int main(){
    float km = 0;

    printf("Digite a velocidade a ser convertida :");
    scanf("%f",&km);
    //Calculo : M/s = Km/h / 3,6
    printf("%f em M/s = ",km/3.6);
    return 0;
}