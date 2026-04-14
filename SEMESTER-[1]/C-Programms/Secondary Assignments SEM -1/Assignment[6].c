/* Write a program using a function to compute and display all factors of a given number. */
#include<stdio.h>
void factors(int);
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    factors(n);
    return 0;
}
void factors(int n) {
    int i;
    for (i=1;i<=n;i++) {
        if (n%i==0)
            printf("%d ",i);
    }
}