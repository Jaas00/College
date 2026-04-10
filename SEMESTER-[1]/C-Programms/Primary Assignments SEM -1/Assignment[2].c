/* ARMSTRONG_NUMBER CHECK */

#include<stdio.h>
#include<math.h>

int isArmstrong(int num) {
    int digits=0,sum=0,r;
    for (int m=num;m>0;m/=10) {
        digits++;
    }
    for (int m=num;m>0;m/=10) {
        r=m%10;
        sum=sum+pow(r,digits);
    }
    return sum==num;
}

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if (isArmstrong(n))
        printf("This is an Armstrong number.");
    else
        printf("This is not an Armstrong number.");
    return 0;
}