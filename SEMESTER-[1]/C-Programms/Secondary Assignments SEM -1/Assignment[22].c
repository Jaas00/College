/* Write a program using structures to add two distances in meter-kilometer format.
 */

#include<stdio.h>
typedef struct distance{
    int km;
    int m;
}dis;
int main(){
    dis d1,d2,sum;
    printf("Enter the first distance (km / m) : ");
    scanf("%d %d",&d1.km,&d1.m);
    printf("Enter the second distance (km / m) : ");
    scanf("%d %d",&d2.km,&d2.m);
    sum.km = d1.km + d2.km;
    sum.m = d1.m + d2.m;
    if(sum.m>=1000){
        sum.km = sum.km + (sum.m/1000);
        sum.m = sum.m%1000;
    }
    printf("The summetion of two distances is %d km and %d m",sum.km,sum.m);
    return 0;
}