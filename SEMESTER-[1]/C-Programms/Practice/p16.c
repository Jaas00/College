/* WAP to find the largest element from 2D array. */
#include<stdio.h>
int Max(int r, int c, int a[][c]){
    int i,j,max = a[0][0];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(max<a[i][j]){
                max = a[i][j];
            }
        }
    }
    return max;
}
void getdata(int r, int c, int a[][c]){
    int i,j;
    for(i=0;i<r;i++){
        printf("Enter the %dth row's elements : ",i);
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
int main(){
    int a[2][4],max;
    getdata(2,4,a);
    max = Max(2,4,a);
    printf("The max element is : %d",max);
    return 0;
}