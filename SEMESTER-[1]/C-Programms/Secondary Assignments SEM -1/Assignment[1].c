/* Write a program to compute the sum and product of digits of an integer using user
defined functions. */

#include<stdio.h>
int Sum(int);
int Prod(int);
int main() {
    int n,sum,prod;
    printf("Enter the number : ");
    scanf("%d",&n);
    sum = Sum(n);
    prod = Prod(n);
    printf("\nThe Sum of the digits : %d",sum);
    printf("\nThe Product of the digits : %d",prod);
    return 0;
}
int Sum(int n) {
    int sum = 0;
    while (n>0) {
        sum = sum + (n%10);
        n/=10;
    }
    return sum;
}
int Prod(int n) {
    int prod = 1;
    while (n>0) {
        prod = prod * (n%10);
        n/=10;
    }
    return prod;
}