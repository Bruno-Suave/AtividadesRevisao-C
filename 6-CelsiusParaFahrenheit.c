#include <stdio.h>

int main(){
    float celcius = 0;
    printf("Digite a temperatura a ser convertida : ");
    scanf("%f",&celcius);
    //Calculo : Fahrenheit = (Celcius * 9/5) + 32
    printf("%f em Fahrenheit : %f",celcius,((celcius*9./5.)+32));
    return 0;
}