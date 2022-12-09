#include<stdio.h>

void main(){
    int n;
    float sum = 0;

    printf("please enter a number \n");
    scanf("%d", &n);

    for (int i = 2; i <= n; i +=2)
        sum += 1.0/i;
    
    printf("the ans is %f", sum);
}