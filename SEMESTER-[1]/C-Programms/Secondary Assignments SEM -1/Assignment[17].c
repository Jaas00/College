/*Write a program to display the Fibonacci series
(i) using recursion
(ii) using iteration*/

#include<stdio.h>
void fibo(int n) {
    int a = 0;
    int b = 1;
    while (n > 0) {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
        n--;
    }
}

void fiborecur(int n,int a, int b){
    if(n==0) return;
    printf("%d ",a);
    return fiborecur(n-1,b,a+b);
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("The Fibonacci series upto %d term using iteration is : ",n);
    fibo(n);
    printf("\nThe Fibonacci series upto %d term using recursion is : ",n);
    fiborecur(n,0,1);
    return 0;
}