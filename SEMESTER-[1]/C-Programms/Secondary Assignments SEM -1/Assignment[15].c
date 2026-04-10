/*  Write a program to merge two sorted integer arrays to form a single sorted array. */
#include<stdio.h>
#include<stdlib.h>
int Merge(int *a1, int n1,int *a2,int n2) {
    int i,j,k;
    int *arr;
    arr = (int*)calloc(n1+n2,sizeof(int));
    i=j=k=0;
    while (i<n1) {
        arr[k++] = a1[i++];
    }
    while (j<n2) {
        arr[k++] = a2[j++];
    }
    printf("The merged array is : ");
    for (k=0;k<n1+n2;k++)
        printf("%d",arr[k]);
}
void getdata(int *a1, int *a2, int n1, int n2) {
    int i,j;
    printf("Enter the first array elements :");
    for (i=0;i<n1;i++)
        scanf("%d",a1+i);
    printf("Enter the second array elements :");
    for (j=0;j<n2;j++)
        scanf("%d",a2+j);
}
int main() {
    int a1[50],a2[50];
    int n1,n2;
    printf("Enter the size of the first array :");
    scanf("%d",&n1);
    printf("Enter the size of the second array :");
    scanf("%d",&n2);
    getdata(a1,a2,n1,n2);
    Merge(a1,n1,a2,n2);
    return 0;
}