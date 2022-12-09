#include<stdio.h>

void main(){
    int low;
    int high;
    int num;

    printf("Please enter low \n");
    scanf("%d", &low);

    printf("Please enter high \n");
    scanf("%d", &high);

    printf("Please enter a number \n");
    scanf("%d", &num);

    for (int i = low; i <= high; i++)
    {
        if(i % num == 0)
            printf("%d \n",i);
    }
    
}