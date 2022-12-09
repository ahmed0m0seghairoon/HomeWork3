#include<stdio.h>

void main(){
    int num;

    printf("Please enter a number \n");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("the number %d is even", num);
    else
        printf("the number %d is odd", num);
}