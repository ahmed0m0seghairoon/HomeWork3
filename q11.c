#include<stdio.h>

void main(){
    int sum = 0;
    int product = 1;

    for (int i = 1; i <= 10; i++)
    {
        int n;
        printf("please enter a number \n");
        scanf("%d", &n);
        sum += n;
        product *= n;
    }
    printf("the sum is %d \n", sum);
    printf("the product is %d \n", product);
}