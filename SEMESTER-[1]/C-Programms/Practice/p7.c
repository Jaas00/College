#include<stdio.h>
/* while(n>0){
    p = p*n;
    n--;
    } */
int fact(int n, int p){
    if(n<=0) return p;
    return fact(n-1,p*n);
}
int main(){
    int n,f=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    f = fact(n,f);
    printf("The factorial of %d is %d.",n,f);
    return 0;
}