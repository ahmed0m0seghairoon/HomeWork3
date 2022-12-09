#include<stdio.h>

void main(){
    int low;
    int high;
    int step;
    int count = 0;

    printf("Please enter low, high and step \n");
    scanf("%d", &low);
    scanf("%d", &high);
    scanf("%d", &step);

    for (int i = low; i <= high; i += step){
        printf("%d \n", i);
        count++;
    }

    printf("the count is %d", count);
}