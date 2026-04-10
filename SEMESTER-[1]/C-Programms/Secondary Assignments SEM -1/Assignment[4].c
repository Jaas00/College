/* Write a function to check whether a number is prime or not. Use the same function to
generate all prime numbers less than 100. */
#include<stdio.h>
int Primecheck(int);
int main() {
    int i;
    for (i=2;i<=100;i++) {
        if (Primecheck(i))
            printf("%d ",i);
    }
    return 0;
}
int Primecheck(int n) {
    int i;
    for (i=2;i<n/2;i++) {
        if (n%i==0)
            return 0;
    }
    return 1;
}