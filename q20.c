#include<stdio.h>

void main(){
    int num;
    int count = 0;

    printf("Pease enter a number \n");
    scanf("%d",&num);

    while (num != 0) {
        num /= 10;
        count++;
    }

    printf("the number of digits is %d", count);
    
}