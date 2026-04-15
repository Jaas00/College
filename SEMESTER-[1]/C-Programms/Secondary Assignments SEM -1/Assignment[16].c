/*Write a program that reads 10 integers into an array (using pointers), and prints the
array in ascending and descending order.
*/
#include<stdio.h>
void getdata(int*,int);
void ascending(int*,int);
void descending(int*,int);
int main(){
    int arr[10];
    printf("Enter the array elements : ");
    getdata(arr,10);
    ascending(arr,10);
    printf("\n");
    descending(arr,10);
    printf("\n");
    return 0;
}
void getdata(int *arr,int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",arr+i);
    }
}
void ascending(int *arr, int n){
    int i,j,p=1;
    for(i=0;i<n&&p==1;i++){
        p=0;
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                arr[j] = arr[j]^arr[j+1];
                arr[j+1] = arr[j]^arr[j+1];
                arr[j] = arr[j]^arr[j+1];
                p=1;
            }
        }
    }
    printf("The array in ascending order is : ");
    for(i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
}
void descending(int *arr, int n){
    int i,j,p=1;
    for(i=0;i<n&&p==1;i++){
        p=0;
        for(j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                arr[j] = arr[j]^arr[j+1];
                arr[j+1] = arr[j]^arr[j+1];
                arr[j] = arr[j]^arr[j+1];
                p=1;
            }
        }
    }
    printf("The array in descending order is : ");
    for(i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
}
