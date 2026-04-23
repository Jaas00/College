/* Write a program to calculate the difference between two time periods using structures. */

#include<stdio.h>
typedef struct timePeriod{
    int h;
    int m;
    int s;
}Time;
int main(){
    Time t1,t2,diff;
    long sec1,sec2,dsec;
    printf("Enter the first time period (h/m/s) : ");
    scanf("%d %d %d",&t1.h,&t1.m,&t1.s);
    printf("Enter the second time period (h/m/s) : ");
    scanf("%d %d %d",&t2.h,&t2.m,&t2.s);
    sec1 = (t1.h*3600)+(t1.m*60)+t1.s;
    sec2 = (t2.h*3600)+(t2.m*60)+t2.s;
    dsec = sec1-sec2;
    if(dsec<0) dsec = -dsec;
    diff.h = (dsec/3600);
    diff.m = (dsec%3600)/60;
    diff.s = (dsec%60);
    printf("The time difference is : %02d|%02d|%02d",diff.h,diff.m,diff.s);
    return 0;
}