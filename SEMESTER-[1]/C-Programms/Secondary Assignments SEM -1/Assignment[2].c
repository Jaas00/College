/* Write a program to reverse a non-negative integer using a function. */

#include<stdio.h>
int Rev(int);
int main() {
    int n,rev;
    printf("Enter a non-negative integer : ");
    scanf("%d",&n);
    rev = Rev(n);
    printf("The number after reverse : %d",rev);
    return 0;
}
int Rev(int n) {
    int rev=0;
    while (n>0) {
        rev = (rev*10)+(n%10);
        n/=10;
    }
    return rev;
}