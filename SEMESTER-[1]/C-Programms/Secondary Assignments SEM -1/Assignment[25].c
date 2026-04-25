/* WAP to print a triangle of stars as follows (take number of lines from user):
     *
    ***
   *****
  *******
 *********
 */

#include<stdio.h>
int main(){
    int i,j,k,l,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=n;j>i;j--){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            printf("*");
        }
        for(l=0;l<i;l++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}