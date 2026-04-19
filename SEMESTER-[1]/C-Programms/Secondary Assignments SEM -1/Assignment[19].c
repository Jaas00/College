/* Write a program to calculate the GCD of two numbers
(i) using recursion
(ii) without recursion */
#include<stdio.h>
int GCD(int,int);
int GCDrec(int,int);
int main(){
    int a,b,gcd1,gcd2;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    gcd1 = GCD(a,b);
    gcd2 = GCDrec(a,b);
    printf("The GCD of %d and %d without recursion is : %d",a,b,gcd1);
    printf("\nThe GCD of %d and %d using recursion is : %d",a,b,gcd2);
    return 0;
}
int GCD(int a,int b){
    int t;
    while(b!=0){
        t = b;
        b = a%b;
        a = t;
    }
}
int GCDrec(int a,int b){
    if(b==0) return a;
    return GCDrec(b,a%b);
}