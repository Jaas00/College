/* Write a C program to do the matrix multiplication operation. */

#include<stdio.h>
void getdata(int *r, int *c, int arr[][*c]){
    int i,j;
    for(i=0;i<*r;i++){
        for(j=0;j<*c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
void display(int *r, int *c, int arr[][*c]){
    int i,j;
    for(i=0;i<*r;i++){
        for(j=0;j<*c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void Prod(int *r1,int *c1,int *r2,int *c2,int a1[][*c1],int a2[][*c2],int arr[][*c2]){
    int i,j,k;
    if(*c1!=*r2){
        printf("Dimentional Error.");
        return;
    }
    for(i=0;i<*r1;i++){
        for(j=0;j<*c2;j++){
            arr[i][j]=0;
            for(k=0;k<*c1;k++){
                arr[i][j] = arr[i][j] + a1[i][k]*a2[k][j];
            }
        }
    }
}
int main(){
    int a1[100][100], a2[100][100], a3[100][100];
    int r1,r2,c1,c2;
    printf("Enter the rows of the first matrix : ");
    scanf("%d",&r1);
    printf("Enter the column of the first matrix : ");
    scanf("%d",&c1);
    printf("Enter the rows of the second matrix : ");
    scanf("%d",&r2);
    printf("Enter the column of the second matrix : ");
    scanf("%d",&c2);
    printf("Enter the first matrix : ");
    getdata(&r1,&c1,a1);
    printf("\n");
    printf("Enter the second matrix : ");
    getdata(&r2,&c2,a2);
    Prod(&r1,&c1,&r2,&c2,a1,a2,a3);
    printf("\n");
    printf("The product of two matrix is : ");
    printf("\n");
    display(&r1,&c2,a3);
    return 0;
}