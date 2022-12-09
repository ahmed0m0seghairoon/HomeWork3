#include<stdio.h>

void main(){
    int num;
    int binary = 0;
    printf("enter a number \n");
    scanf("%d",&num);

    while (num > 0)
    {
        binary *= 10;
        binary += (num % 2);
        num = num / 2;
    }

    int reverse = 0, remainder;

    while (binary != 0) {
        remainder = binary % 10;
        reverse = reverse * 10 + remainder;
        binary /= 10;
    }

    printf("%d", reverse);
    
}