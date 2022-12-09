#include<stdio.h>

void main(){
    float temperature;
    printf("Please enter the temperature in fahrenheit \n");
    scanf("%f", &temperature);

    float c = (temperature-32)*5/9;
    printf("the temperature in celsius is %f", c);
}