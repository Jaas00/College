/* WAP to display all the prime numbers stored in 2D array. */
#include<stdio.h>
void getdata(int r, int c, int a[][c]){
    int i,j;
    for(i=0;i<r;i++){
        printf("Enter the %dth row element : ",i);
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
int isP(int n){
    int i;
    for(i=2;i<n/2;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int a[2][4],i,j;
    getdata(2,4,a);
    printf("The prime number(s) are : ");
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            if(isP(a[i][j]))
                printf("%d ",a[i][j]);
        }
    }
    return 0;
}