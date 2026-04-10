/* A 5-digit positive integer is entered through the keyboard, write a recursive function to calculate sum of digits
 * of the 5-digit number.*/
#include<stdio.h>
int Rsum(int);
int main() {
    int n,sum;
    printf("Enter the 5 digit number : ");
    scanf("%d",&n);
    sum = Rsum(n);
    printf("The sum is : %d",sum);
    return 0;
}
int Rsum(int n) {
    int r,sum;
    if (n!=0) {
        r = n%10;
        sum = r + Rsum(n/10);
    }
    return sum;
}