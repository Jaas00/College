/* Binary Search */
#include<stdio.h>
void getdata(int a[],int n){
    int i;
    printf("Enter the array elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int B(int a[],int n, int key){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid = (low+high)/2;
        if(a[mid]==key) return mid;
        else if(key>a[mid]) low = mid+1;
        else high = mid-1;
    }
    return -1;
}
int main(){
    int a[20],n,key,i;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    getdata(a,n);
    printf("Enter the targeted element : ");
    scanf("%d",&key);
    i = B(a,n,key);
    if(i==-1){
        printf("Key not found.");
    }
    else{
        printf("Key found at the index %d.",i);
    }
    return 0;
}