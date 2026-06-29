#include<stdio.h>
void fib(int n){
    int a = 0,b = 1,t;
    while(n>0){
        printf("%d",a);
        t = a+b;
        a = b;
        b = t;
        n--;
    }
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    fib(n);
    return 0;
}