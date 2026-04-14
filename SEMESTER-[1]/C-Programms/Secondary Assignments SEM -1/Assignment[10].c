/* Write a program in which a function receives addresses of two variables and alters their
contents. */
#include<stdio.h>
void Alter(int *a, int *b) {
    *a = *a+100;
    *b = *b*10;
}
int main() {
    int a,b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("Before altering the values : %d %d",a,b);
    Alter(&a,&b);
    printf("\nAfter altering the values : %d %d",a,b);
    return 0;
}