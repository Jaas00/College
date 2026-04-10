/* Write a program that takes the radius of a circle as input, passes it to a function that
computes area and circumference, and displays results in main(). */
#include<stdio.h>
#define PI 3.14
void Circle(double r, double *area, double *circumference) {
    *area = PI*r*r;
    *circumference = 2*PI*r;
}
int main() {
    double r, area, circumference;
    printf("Enter the radius : ");
    scanf("%lf",&r);
    Circle(r,&area,&circumference);
    printf("Area of the circle is : %lf",area);
    printf("\nCircumference of the circle is : %lf",circumference);
    return 0;
}