#include <stdio.h>

int main(){
    float Kelvin = 0;
    printf("Digite a temperatura a ser convertida : ");
    scanf("%f",&Kelvin);
    //Calculo : Celcius = Kelvin + 273.15
    printf("%f em Celcius = %f",Kelvin,Kelvin+273.15);
    return 0;
}