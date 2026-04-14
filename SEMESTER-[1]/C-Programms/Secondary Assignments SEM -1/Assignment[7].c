/* Write a program to swap two numbers using a macro (#define). */
#include<stdio.h>
#define SWAP(a,b) {\
    a = a^b;\
    b = a^b;\
    a = a^b;\
}
int main() {
    int a,b;
    printf("Enter a and b : ");
    scanf("%d %d",&a,&b);
    printf("The numbers before swap : %d %d ",a,b);
    SWAP(a,b)
    printf("\nThe numbers after swap  : %d %d",a,b);
    return 0;
}