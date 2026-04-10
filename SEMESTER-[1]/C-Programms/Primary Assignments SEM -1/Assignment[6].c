/* FINDING THE LARGEST NUMBER IN AN ARRAY */

#include<stdio.h>
int findLargest(int arr[], int size) {
    int i,m=arr[0];
    for (i=1;i<size;i++) {
        if (m<arr[i])
            m=arr[i];
    }
    return m;

}
int main() {
    int i,n,arr[10],Largest;
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter the number of elements : ");
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    Largest = findLargest(arr,n);
    printf("The Largest number in the array is %d",Largest);
    return 0;
}