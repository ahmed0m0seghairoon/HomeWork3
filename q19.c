#include<stdio.h>

void main(){
    int num;

    printf("enter a number \n");
    scanf("%d",&num);

    for (int i = 1; i <= 12; i++)
        printf("%d * %d = %d \n",num,i , num*i );
    
}