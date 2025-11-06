#include <stdio.h>

int main(){
    float Fahrenheit = 0;
    printf("Digite o valor a ser convertido para Celcius : ");
    scanf("%f",&Fahrenheit);
    //Calculo : Celcius = 5/9 * (Fahrenheit-32)
    printf("%f Fahrenheit em Celcius = %f",Fahrenheit,(5./9.*(Fahrenheit-32)));
    return 0;
}