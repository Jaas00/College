/* Write a C program that defines a structure Rectangle with attributes length and width.
Include a user-defined function named calculateArea with the signature float
calculateArea(struct Rectangle r);. The function should calculate and return the area of
the rectangle. */

#include<stdio.h>
struct Rectangle {
    float length,width;
};
float calculateArea(struct Rectangle r) {
    return r.length * r.width;
}
int main() {
    struct Rectangle r;
    float area;
    printf("Enter the Length of the Rectangle : ");
    scanf("%f",&r.length);
    printf("\nEnter the width of the Rectangle : ");
    scanf("%f",&r.width);
    area = calculateArea(r);
    printf("The area of the Rectangle is %.2f",area);
    return 0;
}