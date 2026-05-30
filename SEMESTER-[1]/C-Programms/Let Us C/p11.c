/* A positive integer is entered through the keyboard.
Write a function to obtain the prime factors of this number. */
#include<stdio.h>
void PF(int n){
    int i;
    for(i=2;i<=n;i++){
        while(n%i==0){
            printf("%d ",i);
            n/=i;
        }
    }
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The Prime Fctors : ");
    PF(n);
    return 0;
}