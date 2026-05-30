/* Write a C program to print the multiplication table of the number entered by the user. */
#include<stdio.h>
int main(){
    int n,i,p;
    printf("What multiplication table do you want : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        p = n*i;
        printf("\n%d * %d = %d",n,i,p);
    }
    return 0;
}