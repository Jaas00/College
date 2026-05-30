/* Write a C program to enter numbers till the user wants.
At the end it should display the count of positive, negative and zeros entered. */
#include<stdio.h>
int main(){
    int p,n,z,num;
    char ch;
    p=n=z=0;
    do{
        printf("Enter the number : ");
        scanf("%d",&num);
        (num>0)?p++:(num<0)?n++:z++;
        printf("Do you want to enter another number ? (y/n)");
        scanf(" %c",&ch);
    }while(ch=='y'||ch=='Y');
    printf("\nPositive numbers : %d",p);
    printf("\nNegative numbers : %d",n);
    printf("\nZeros : %d",z);
    return 0;
}