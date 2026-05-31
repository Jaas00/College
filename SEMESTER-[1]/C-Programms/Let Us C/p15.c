/* Write macro definition with arguments for calculation of simple
Interest and Amount. Store these macro definitions in a file
"interest.h". Include this file in your program, and use the macro
definitions for calculating Simple Interest and Amount. */
#include<stdio.h>
#include"(p15)interest.h"
int main(){
    float p,r,t,a,si;
    printf("Enter the Principal Amount : ");
    scanf("%f",&p);
    printf("\nEnter the rate of change : ");
    scanf("%f",&r);
    printf("\nEnter the time : ");
    scanf("%f",&t);
    si = SI(p,r,t);
    a = AM(si,p);
    printf("\nThe Simple Intereste is %.2f",si);
    printf("\nThe Total Amount is %.2f",a);
    return 0;
}