/* Write a program in which a function passes the address of two variables and then alter its
contents.
 */

#include<stdio.h>
void alter(int*,int*);
int main(){
    int n1 = 20, n2 = 40;
    printf("Before altering the content the numbers are : %d and %d",n1,n2);
    alter(&n1,&n2);
    printf("\nAfter altering the content the numbers are : %d and %d",n1,n2);
    return 0;
}
void alter(int *p1, int *p2){
    *p1 = 75;
    *p2 += 20;
}