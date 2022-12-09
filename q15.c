#include<stdio.h>

void main(){
    int n;
    int fact = 1;

    printf("Please enter a number \n");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
        printf("%d \n", i);  
}