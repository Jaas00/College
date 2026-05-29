/* Write a program that will read 10 integers from the user and store them in an array. Implement an
array using pointers. The program will print the array elements in ascending and descending
order. */

#include<stdio.h>
void getdata(int *arr){
    int i;
    for(i=0;i<10;i++){
        scanf("%d",arr+i);
    }
}
void display(int *arr){
    int i;
    for(i=0;i<10;i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");
}
void Asort(int *arr){
    int i,j,p,t;
    p = 1;
    for(i=0;i<10-1 && p==1;i++){
        p = 0;
        for(j=0;j<10-i-1;j++){
            if(*(arr+j)>*(arr+j+1)){
                t = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = t;
                p = 1;
            }
        }
    }
}
void Dsort(int *arr){
    int i,j,t,p=1;
    for(i=0;i<10-1 && p==1;i++){
        p=0;
        for(j=0;j<10-i-1;j++){
            if(arr[j]<arr[j+1]){
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
                p = 1;
            }
        }
    }
}
int main(){
    int arr[10];
    printf("Enter the array elements : ");
    getdata(arr);
    printf("The array in ascending order : ");
    Asort(arr);
    display(arr);
    printf("The array in Descending order : ");
    Dsort(arr);
    display(arr);
    return 0;
}