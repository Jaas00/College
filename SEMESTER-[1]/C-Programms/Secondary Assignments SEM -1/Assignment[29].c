/* Write a program to find the sum of n elements entered by the user. To write this program,
allocate memory dynamically using malloc() / calloc() functions or new operators.
 */

#include<stdio.h>
#include<stdlib.h>
void getdata(int*,int*);
int Sum(int*,int*);
int main(){
    int *arr,n,sum;
    printf("How many numbers do you wish to enter? :::>>> ");
    scanf("%d",&n);
    arr = (int*)calloc(n,sizeof(int));
    printf("Enter the numbers : ");
    getdata(arr,&n);
    sum = Sum(arr,&n);
    printf("\nThe sum of the elements is : %d",sum);
    free(arr);
    return 0;
}
void getdata(int *a, int *n){
    int i;
    for(i=0;i<*n;i++){
        scanf("%d",a+i);
    }
}
int Sum(int *a, int *n){
    int i,sum = 0;
    for(i=0;i<*n;i++){
        sum += a[i];
    }
    return sum;
}