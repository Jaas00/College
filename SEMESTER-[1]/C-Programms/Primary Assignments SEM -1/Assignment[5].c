/* REVERSING AN ARRAY */

#include<stdio.h>
void reverseArray(int arr[], int size) {
    int i,j=size-1;
    for (i=0;i<j;i++) {
        arr[i] = arr[i]^arr[j];
        arr[j] = arr[i]^arr[j];
        arr[i] = arr[i]^arr[j];
        j--;
    }
}
void displayArray(int arr[], int size) {
    int i;
    for (i=0;i<size;i++)
        printf(" %d",arr[i]);
}
int main() {
    int n,i,arr[10];
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter the number of elements : ");
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Before reversing the Array : ");
    displayArray(arr,n);
    reverseArray(arr,n);
    printf("\nAfter reversing the Array : ");
    displayArray(arr,n);
    return 0;
}