/* The length and breadth of a rectangle and radius of a circle are input through the keyboard. Write a program
to calculate the are and the perimetere of the rectangle, and the are and circumference of the circle. */
#include<stdio.h>
void A(double *l, double *b, double *r, double *a, double *p, double *ac, double *c){
    *a = (*l)*(*b);
    *p = 2*((*l)+(*b));
    *ac = 3.14 * (*r)*(*r);
    *c = 2*3.14*(*r);
}
int main(){
    double l,b,r,a,p,ac,c;
    printf("Enter the length of the rectangle : ");
    scanf("%lf",&l);
    printf("Enter the breadth of the rectangle : ");
    scanf("%lf",&b);
    printf("Enter the radius of the circle : ");
    scanf("%lf",&r);
    A(&l,&b,&r,&a,&p,&ac,&c);
    printf("The area and the perimetere of the rectangle is : %.2lf and %.2lf",a,p);
    printf("\nThe radius and the circumference of the circle is : %.2lf and %.2lf",ac,c);
    return 0;
}