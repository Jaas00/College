/* write a program to print all Armstrong numbers between 100 to 500.
If sum of cubes of each digit of the number is equal to the number itself then the number is called an Armstrong number */
#include<stdio.h>
#include<math.h>
int Arm(int n){
    int d = 0,s = 0;
    int r,m=n;
    while(m>0){
        d++;
        m/=10;
    }
    for(m=n;m>0;m/=10){
        r = m%10;
        s = s + pow(r,d);
    }
    if(s==n) return 1;
    return 0;
}
int main(){
    int i;
    for(i=100;i<=500;i++){
        if(Arm(i)) printf("%d\t",i);
    }
    return 0;
}