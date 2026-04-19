/* Write a program to calculate the factorial of a number
(i) using recursion
(ii) using iteration */
#include<stdio.h>
int Fact(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int Factrec(int n,int i){
    if(i>n) return 1;
    return i*Factrec(n,i+1);
}
int main(){
    int n,fact1,fact2;
    printf("Enter the number : ");
    scanf("%d",&n);
    fact1 = Fact(n);
    fact2 = Factrec(n,1);
    printf("The Factorical of %d using iteration is %d",n,fact1);
    printf("\nThe Factorial of %d using recursion is %d",n,fact2);
    return 0;
}