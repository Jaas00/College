/* Given two ordered arrays of integers, write a program to merge the two-arrays to get an ordered
array.
 */

#include<stdio.h>
#include<stdlib.h>
void getdata(int*,int);
void display(int*,int);
void merge(int*,int,int*,int);
int main(){
    int a1[50],a2[50],n1,n2;
    printf("Enter the size of the first array : ");
    scanf("%d",&n1);
    printf("Enter the first array elements in ascending order : ");
    getdata(a1,n1);
    printf("Enter the size of the second array : ");
    scanf("%d",&n2);
    printf("Enter the second array elements in ascending order : ");
    getdata(a2,n2);
    printf("The merged array is : ");
    merge(a1,n1,a2,n2);
    return 0;
}
void getdata(int *a, int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",(a+i));
    }
}
void display(int *a, int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",*(a+i));
    }
}
void merge(int *a1,int n1,int *a2,int n2){
    int n = n1+n2,i,j,k;
    int *arr = (int*)calloc(n,sizeof(int));
    i=j=k=0;
    while(i<n1&&j<n2){
        if(a1[i]<a2[j])
            arr[k++] = a1[i++];
        else
            arr[k++] = a2[j++];
    }
    while(i<n1){
        arr[k++] = a1[i++];
    }
    while(j<n2){
        arr[k++] = a2[j++];
    }
    display(arr,n);
    free(arr);
}