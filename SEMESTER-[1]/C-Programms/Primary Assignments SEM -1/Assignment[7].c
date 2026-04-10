#include<stdio.h>
int binarySearch(int arr[], int size, int target) {
    int low = 0, mid, high = size-1;
    while (low<=high) {
        mid = (low+high)/2;
        if (arr[mid]==target)
            return mid;
        else if (target<arr[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}
int main() {
    int i, arr[10], n, target, result;
    printf("Enter the size of the Array : ");
    scanf("%d",&n);
    printf("Enter the Elements of the sorted array in ascending order : ");
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the target element : ");
    scanf("%d",&target);
    result = binarySearch(arr,n,target);
    if (result==-1)
        printf("The targeted element is not found.");
    else
        printf("The targeted element is at index : %d",result);
    return 0;
}