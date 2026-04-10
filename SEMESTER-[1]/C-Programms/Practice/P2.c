/* A positive integer is entered through the keyboard, write a program to obtain the prime factors of the number.
 * Modify the function suitably to obtain the prime factors recursively.*/
#include<stdio.h>
void PF(int,int);
int main() {
    int n,factors;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The Prime factors are : ");
    PF(n,2);
    return 0;
}
void PF(int n, int i) {
    if (i<=n) {
        if (n%i==0) {
            printf("%d ",i);
            n/=i;
        }
        else
            i++;
        PF(n,i);
    }
}