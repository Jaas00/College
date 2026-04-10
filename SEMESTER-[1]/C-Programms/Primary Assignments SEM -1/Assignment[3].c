/* PERFECT_NUMBER CHECK */

#include<stdio.h>
int isPerfect(int num) {
    int sum=0,i;
    if (num==0)
        return 0;

    for (i=1;i<=num/2;i++) {
        if (num%i==0) {
            sum=sum+i;
        }
    }
    return sum==num;
}
int main() {
    int n;
    printf("Enter a positive integer number :");
    scanf("%d",&n);
    if (isPerfect(n))
        printf("This is a Perfect number.");
    else
        printf("This is not a Perfect number.");
    return 0;
}