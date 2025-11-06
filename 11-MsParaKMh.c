#include <stdio.h>

int main(){
    float ms = 0;
    printf("Digite a velocidade a ser convertida : ");
    scanf("%f",&ms);
    //Calculo : Km/h = M/s * 3,6 
    printf("%f em Km/h = %f",ms,ms*3.6);
    return 0;
}