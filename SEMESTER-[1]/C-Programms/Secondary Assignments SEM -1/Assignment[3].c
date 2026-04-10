/* Write a program to compute the sum of the first n terms of the series using a function:
S=1−2+3−4+5−6+…  */
#include<stdio.h>
int Series(int);
int main() {
    int n,sum;
    printf("Enter the number : ");
    scanf("%d",&n);
    sum = Series(n);
    printf("The sum of the series : %d",sum);
    return 0;
}
int Series(int n) {
    int i,sum=0;
    for (i=1;i<=n;i++) {
        if (i%2!=0)
            sum = sum + i;
        else
            sum = sum - i;
    }
    return sum;
}