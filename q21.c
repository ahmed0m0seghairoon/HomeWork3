#include<stdio.h>

void main(){
    int num;

    printf("Pease enter a number \n");
    scanf("%d",&num);

    int lastDigit = num%10;
    num/=10;

    int firstDigit = num;

    while (num != 0) {
        firstDigit = num;
        num /= 10;
    }

    printf("the first digit is %d and the last digit is %d",firstDigit, lastDigit);
    
}