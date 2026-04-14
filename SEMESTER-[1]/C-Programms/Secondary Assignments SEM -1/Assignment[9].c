/* Write a program to swap two numbers using pointers (user-defined function). */
#include<stdio.h>
void Swap(int *a,int *b) {
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}
int main() {
    int n1,n2;
    printf("Enter the 1st number : ");
    scanf("%d",&n1);
    printf("Enter the 2nd number : ");
    scanf("%d",&n2);
    printf("The numbers before swap %d %d",n1,n2);
    Swap(&n1,&n2);
    printf("\nThe numbers after swap %d %d",n1,n2);
    return 0;
}