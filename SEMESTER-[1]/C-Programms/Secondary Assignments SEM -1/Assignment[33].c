/* Write a function that reverses the elements of an array in place. The function must accept only
one pointer value and return void. */
#include<stdio.h>
typedef struct ArrayData{
    int a[50];
    int n;
}array;

void getdata(array *arr){
    int i;
    for(i=0;i<arr->n;i++){
        scanf("%d",(arr->a+i));
    }
}
void display(array *arr){
    int i;
    for(i=0;i<arr->n;i++){
        printf("%d ",*(arr->a+i));
    }
}
void rev(array *arr){
    int i,j,t;
    i = 0;
    j = arr->n-1;
    while(i<j){
        t = arr->a[i];
        arr->a[i] = arr->a[j];
        arr->a[j] = t;
        i++;
        j--;
    }
}
int main(){
    array arr;
    printf("Enter the size of the array : ");
    scanf("%d",&arr.n);
    printf("Enter the array elements : ");
    getdata(&arr);
    rev(&arr);
    printf("\n");
    display(&arr);
    return 0;
}