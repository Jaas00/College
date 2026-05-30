/* Given three variables x,y,z, write a function to circularly shift their
values to right. In another words, if x = 5, y = 8, z = 10, after circular
shift y = 5, z = 8, x = 10. Call the fumction with variables a, b, c to
circularly shift values. */

#include<stdio.h>
void C(int *x, int *y, int *z){
    int t = *z;
    *z = *y;
    *y = *x;
    *x = t;
}
int main(){
    int x=5,y=8,z=10;
    printf("The original value of x = %d, y = %d, z = %d",x,y,z);
    C(&x,&y,&z);
    printf("\nThe updated value of x = %d, y = %d, z = %d",x,y,z);
    return 0;
}