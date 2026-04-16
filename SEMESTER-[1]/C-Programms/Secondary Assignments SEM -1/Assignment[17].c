/*Write a program to display the Fibonacci series
(i) using recursion
(ii) using iteration*/

#include<stdio.h>
void fibo(int n) {
    int i, t1 = 0, t2 = 1, t;
    if (n >= 1) {
        printf("%d ", t1);
    }
    if (n >= 2) {
        printf("%d ", t2);
    }
    for (i = 3; i <= n; i++) {
        t = t1 + t2;
        printf("%d ", t);
        t1 = t2;
        t2 = t;
    }
}
int main(){
    int n; //fib;
    printf("enter the number : ");
    scanf("%d",&n);
    //fib = fibo(n);
    //printf("The Fibonacci series upto %d term is %d",n,fib);
    printf("The Fibonacci series upto %d term is : ",n);
    fibo(n);
    return 0;
}