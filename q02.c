#include<stdio.h>

void main(){
    float radius;
    printf("Please input the radius \n");
    scanf("%f", &radius);

    float area = 3.141593 * radius * radius;

    printf("the area is %f", area);
}