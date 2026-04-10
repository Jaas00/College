/* ASSIGNMENT 1 [PRIME CHECK] */

#include<stdio.h>
#include<math.h>
int isPrime(int num){
    if (num<=1)
        return 0;
    for (int i=2;i<=sqrt(num);i++) {
        if (num%i==0)
            return 0;
    }
    return 1;
}
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (isPrime(n))
        printf("This is a prime number.");
    else
        printf("This is not a prime number.");
    return 0;
}