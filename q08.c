#include<stdio.h>

void main(){
    int low;
    int high;
    int sum = 0;

    printf("Please enter low and high \n");
    scanf("%d", &low);
    scanf("%d", &high);

    for (int i = low; i <= high; i++)
    {
        sum += i;
    }

    printf("the sum is %d", sum);
    
}