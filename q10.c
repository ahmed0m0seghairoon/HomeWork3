#include<stdio.h>

void main(){
    int a,b,c;

    printf("Please enter 3 numbers \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int max = a;

    if (b>max)
        max = b;
    
    if (c > max)
        max = c;

    printf("the largest number is %d", max);
}