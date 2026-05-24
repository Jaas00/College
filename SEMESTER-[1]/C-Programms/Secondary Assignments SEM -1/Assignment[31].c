/* WAP to display Fibonacci series (i) using recursion, (ii) using iteration. */

#include<stdio.h>
//Using recursion
void Fibr(int n,int t1, int t2){
   if(n<=0) return;
   printf("%d ",t1);
   return Fibr((n-1),t2,(t1+t2));
}
//Using iteration
void Fibi(int n){
    int t1 = 0,t2 = 1,t;
    while(n>0){
        printf("%d ",t1);
        t = t1 + t2;
        t1 = t2;
        t2 = t;
        n--;
    }
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    Fibi(n);
    printf("\n");
    Fibr(n,0,1);
    return 0;
}