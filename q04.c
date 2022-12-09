#include<stdio.h>

void main(){
    float temperature;
    printf("Please enter the temperature in celsius \n");
    scanf("%f",&temperature);

    if (temperature > 0)
        printf("the temperature is above the freezing point");
    else if (temperature == 0)
        printf("the temperature is at the freezing point");
    else
        printf("the temperature is below the freezing point");
}