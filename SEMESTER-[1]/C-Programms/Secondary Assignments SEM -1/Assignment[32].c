/* Write a function that reverses the elements of an array in place. The function must accept only
one pointer value and return void. */
#include<stdio.h>
void getdata(int *a,int *n){
    int i;
    for(i=0;i<*n;i++){
        scanf("%d",(a+i));
    }
}
void display(int *a, int *n){
    int i;
    for(i=0;i<*n;i++){
        printf("%d ",*(a+i));
    }
}
void rev(int *arr, int *n){
    int i,j,t;
    i = 0;
    j = *n-1;
    while(i<j){
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        i++;
        j--;
    }
}
int main(){
    int arr[50],n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the array elements : ");
    getdata(arr,&n);
    printf("\n");
    printf("The reversed array is : ");
    rev(arr,&n);
    display(arr,&n);
    return 0;
}