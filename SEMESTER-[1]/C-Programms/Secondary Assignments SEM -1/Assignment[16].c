/* Write a program that reads 10 integers into an array (using pointers), and prints the
array in ascending and descending order. */
#include<stdio.h>
void getdata(int *arr, int n) {
    int i;
    printf("Enter the array elements : ");
    for (i=0;i<n;i++)
        scanf("%d",arr + i);
}
void ascending(int *arr, int n) {
    int i,j,p = 1;
    for (i=0;i<n && p==1;i++){
        p=0;
        for (j=0;j<n-1-i;j++) {
            if ()
        }
    }
}