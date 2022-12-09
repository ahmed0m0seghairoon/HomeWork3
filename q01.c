#include<stdio.h>

int main(){

    int num1;
    int num2;

    printf("Please enter two numbers \n");

    scanf("%d", &num1);
    scanf("%d", &num2);

    int sum = num1 + num2;

    printf("the sum is %d", sum);

    return 0;
}