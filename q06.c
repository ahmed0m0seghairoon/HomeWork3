#include<stdio.h>

void main(){
    float feet;
    printf("Please enter the length in feet \n");
    scanf("%f", &feet);

    float c = feet * 30.48;
    printf("the length in cm is %f", c);
}