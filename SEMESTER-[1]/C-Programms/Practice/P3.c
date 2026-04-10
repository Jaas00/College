/* Write a recursive function to obtain the first 25 numbers of a Fibonacci sequence.
 * In a Fibonacci sequence the sum of two successive terms gives the third term.
 * Following are the first few terms of the Fibonacci sequence :
 * 0 1 1 2 3 5 8 13 21 34 55 89... */
#include<stdio.h>
int Fibo(int);
int main() {
    int term,n=0,i;
    printf("Enter the term : ");
    scanf("%d",&term);
    printf("The Fibonacci sequence are : ");
    for (i=1;i<=term;i++) {
        printf("\n%d",Fibo(n));
        n++;
    }
    return 0;
}
int Fibo(int n) {
    if (n==0 || n==1)
        return n;
    else
        return (Fibo(n-1)+Fibo(n-2));
}