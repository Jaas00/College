/* A positive integer is entered through the keyboard, write a C program
to find the binary equivalent of this number:
1. without using recursion.
2. using rerursion */
#include<stdio.h>
//#define I
#define RE
#ifdef I
int WR(int arr[], int n){
    int i=0;
    while(n>0){
        arr[i] = n%2;
        n/=2;
        i++;
    }
    return i;
}
int main(){
    int arr[32],i,n,j;
    printf("Enter the number : ");
    scanf("%d",&n);
    i = WR(arr,n);
    if(i==0){
        printf("The Binary equivalent is : 0");
        return 0;
    }
    printf("The Binary equivalent is : ");
    for(j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
    return 0;
}
#endif
#ifdef RE
int R(int arr[],int n,int i){
    if(n<=0) return i;
    arr[i] = n%2;
    return R(arr,n/2,i+1);
}
int main(){
    int i,n,arr[32],j;
    printf("Enter the number : ");
    scanf("%d",&n);
    i = R(arr,n,0);
    if(i==0){
        printf("The Binary equivalent of this number is 0");
        return 0;
    }
    printf("The Binary equivalent of this number is : ");
    for(j = i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
    return 0;
}
#endif