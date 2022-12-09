#include<stdio.h>

void main(){
    int n;
    int fact = 1;

    printf("Please enter a number \n");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
        fact *= i;

    printf("the factorial is %d", fact);    
}