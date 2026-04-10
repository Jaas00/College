/* Write a program to find the sum of n elements entered by the user. Use dynamic
memory allocation (malloc() or calloc()). */
#include<stdio.h>
#include<stdlib.h>
int main() {
    int i,*arr,n,sum=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    arr = (int*)calloc(n,sizeof(int));
    if (arr==NULL) {
        printf("Dynamic memory allocation failed!!!");
        exit(1);
    }
    printf("Enter the array elements : ");
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }
    printf("Sum = %d",sum);
    free(arr);
    return 0;
}