/* Write macro definitions with arguments for calculation of area and perimeter of a triangle, a square
 * and a circle. Store these macro definitions in a file "areaperi.h". Include this file in your program,
 * and use the macro definitions for calculating area and perimeter for different squares, triangles and circles.
 */
#include<stdio.h>
#include "areaperi.h"
#define CIRCLE
#define SQUARE
#define TRIANGLE
int main() {
    float sid1, sid2, sid3, sid, p_tri, p_cir, p_sqr, a_tri, a_cir, a_sqr;
    float r, base, height;
#ifdef CIRCLE
    printf("\nEnter radius of circle : ");
    scanf("%f",&r);
    p_cir = PERIC(r);
    printf("Circumference of circle = %f\n",p_cir);
    a_cir = AREAC(r);
    printf("Area of circle = %f\n",a_cir);
#endif
#ifdef SQUARE
    printf("Enter side of a square : ");
    scanf("%f",&sid);
    p_sqr = PERIS(sid);
    printf("Perimeter of square = %f\n",p_sqr);
    a_sqr = AREAS(sid);
    printf("Area of square = %f\n",a_sqr);
#endif
#ifdef TRIANGLE
    printf("Enter length of 3 sides of triangle : ");
    scanf("%f %f %f",&sid1,&sid2,&sid3);
    p_tri = PERIT(sid1, sid2, sid3);
    printf("Perimeter of triangle = %f\n",p_tri);
    printf("Enter base and height of triangle : ");
    scanf("%f %f",&base,&height);
    a_tri = AREAT(base,height);
    printf("Area of triangle = %f\n",a_tri);
#endif
    return 0;
}