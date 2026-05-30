/* Write a C program to find the range of a set of numbers entered through the keyboard. */

#include<stdio.h>
int main(){
    int max, min, i, n, num,r;
    printf("How many numbers do you want to enter : ");
    scanf("%d",&n);
    printf("Enter the number - 1 :");
    scanf("%d",&num);
    if(num<0){
        printf("Enter a positive number.");
        return 1;
    }
    max=min=num;
    for(i=2;i<=n;i++){
        printf("Enter the number - %d :",i);
        scanf("%d",&num);
        if(num>max) max = num;
        if(num<min) min = num;
    }
    r = max-min;
    printf("\nThe maximum number is : %d",max);
    printf("\nThe minimum number is : %d",min);
    printf("\nThe range is : %d",r);
    return 0;
}