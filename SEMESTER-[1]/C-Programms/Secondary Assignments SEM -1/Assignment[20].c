/* Write a menu-driven program to perform the following matrix operations using 2-D
arrays and functions:
a. Sum
b. Difference
c. Product
d. Transpose */
#include<stdio.h>
void Sum(int r,int c,int a[][c],int b[][c],int s[][c]);
void Diff(int r,int c,int a[][c],int b[][c],int d[][c]);
void Prod(int r1,int c1,int r2,int c2,int a[][c1],int b[][c2],int c[r1][c2]);
void Tran(int r,int c,int a[][c],int b[][r]);
void getdata(int r, int c,int a[][c]);
void display(int r, int c,int a[][c]);
void Data();

int main(){
    Data();
    return 0;
}
void Sum(int r,int c,int a[][c],int b[][c],int s[][c]){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            s[i][j] = a[i][j]+b[i][j];
        }
    }
    printf("The sum of both matrix is : \n");
    display(r,c,s);
}

void Diff(int r,int c,int a[][c],int b[][c],int d[][c]){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            d[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("The difference of both matrix is : \n");
    display(r,c,d);
}

void Prod(int r1,int c1,int r2,int c2,int a[][c1],int b[][c2],int c[r1][c2]){
    int i,j,k;
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            c[i][j] = 0;
            for(k=0;k<c1;k++){
                c[i][j] = c[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    printf("The Product of the matrix is : \n");
    display(r1,c2,c);
}

void Tran(int r,int c,int a[][c],int b[][r]){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            b[j][i] = a[i][j];
        }
    }
    display(r,c,b);
}

void getdata(int r, int c,int a[][c]){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void display(int r, int c,int a[][c]){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void Data(){
    int r1,c1,r2,c2,arr1[50][50],arr2[50][50],arr[50][50];
    char choice;
    printf("Enter the rows of the first matrix : ");
    scanf("%d",&r1);
    printf("Enter the columns of the first matrix : ");
    scanf("%d",&c1);
    printf("Enter the rows of the second matrix : ");
    scanf("%d",&r2);
    printf("Enter the columns of the second matrix : ");
    scanf("%d",&c2);
    printf("Enter the first matrix elements : ");
    getdata(r1,c1,arr1);
    printf("Enter the second matrix elements : ");
    getdata(r2,c2,arr2);
    do{
        printf("~~MATRIX OPERATION MENU~~\n");
        printf("Press 's' to see the two matrix sum.\n");
        printf("Press 'd' to see the two matrix difference (A-B).\n");
        printf("Press 'p' to see the product of two matrix (A*B).\n");
        printf("Press 't' to see the transpose of two matrix (A^t, B^t).\n");
        printf("Press 'q' to quit the session.\n");
        printf("Enter the choice : ");
        scanf(" %c",&choice);
        switch(choice){
            case 's' :
            (r1==r2 &&c1==c2)?Sum(r1,c1,arr1,arr2,arr):printf("The sum is not possible.");
            break;
            case 'd' :
            (r1==r2 &&c1==c2)?Diff(r1,c1,arr1,arr2,arr):printf("The difference is not possible.");
            break;
            case 'p' :
            (c1==r2)?Prod(r1,c1,r2,c2,arr1,arr2,arr):printf("The matrix product is not possible.");
            break;
            case 't' :
            printf("The transpose of the first matrinx is : \n");
            Tran(r1,c1,arr1,arr);
            printf("The transpose of the second matrix is : \n");
            Tran(r1,c2,arr2,arr);
            break;
            case 'q' :
            printf("\nYou have exited the menu.\n");
            break;
            default :
            printf("\nInvalid choice.\n");
        }
    }while(choice!='q');
}