//Write a Recursive C program to obtain the sum of first 25 natural numbers.
#include<stdio.h>
int Sum(int n, int s){
    if(n<=0) return s;
    return Sum((n-1),(s+n));
}
int main(){
    int s;
    s = Sum(25,0);
    printf("The sum of first 25 natural numbers is : %d",s);
    return 0;
}