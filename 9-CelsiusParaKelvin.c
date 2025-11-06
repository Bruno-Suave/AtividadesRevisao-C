#include <stdio.h>

int main(){
    float Celcius = 0;
    printf("Digite a temperatura a ser convertida : ");
    scanf("%f",&Celcius);
    //Calculo : Kelvin = Celcius - 273.15
    printf("%f em Kelvin = %f",Celcius,Celcius-273.15);
    return 0;
}