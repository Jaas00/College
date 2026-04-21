/* Write a program to add two complex numbers using structures.
 */

#include<stdio.h>
typedef struct complex{
    float real;
    float img;
}com;
int main(){
    com n1,n2,sum;
    printf("Enter the real and imaginary parts of the first complex number : ");
    scanf("%f %f",&n1.real,&n1.img);
    printf("Enter the real and imaginary parts of the second complex number : ");
    scanf("%f %f",&n2.real,&n2.img);
    if(n1.img <=0 || n2.img <= 0){
        printf("The imaginary number can't be less than or equal to zero.");
        return 1;
    }
    sum.real = n1.real + n2.real;
    sum.img = n1.img + n2.img;
    printf("The sum = %g+%gi",sum.real,sum.img);
    return 0;
}