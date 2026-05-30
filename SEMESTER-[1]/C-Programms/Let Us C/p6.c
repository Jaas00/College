/* Write a C program to receve an integer and find its octal equivalent. */

#include<stdio.h>
int main(){
    int i=0,j,o[100],n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n==0){
        printf("The Octal equivalent is 0\n");
        return 0;
    }
    while(n!=0){
        o[i] = n%8;
        n/=8;
        i++;
    }
    for(j = i-1;j>=0;j--){
        printf("%d ",o[j]);
    }
    return 0;
}