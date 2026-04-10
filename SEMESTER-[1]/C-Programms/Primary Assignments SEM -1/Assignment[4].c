/* COUNTING THE NUMBER OF DAYS IN AN YEAR */

#include<stdio.h>
int main() {
    int month, year, days;
    printf("Enter the month (1 to 12) and the year : ");
    scanf("%d%d",&month,&year);
    if ((month<1)||(month>12)||(year<0001)) {
        printf("Please enter a positive integer number which is less than 13. ");
        return 1;
    }
    switch (month) {
        case 2 :
            if ((year%4==0 && year%100!=0) || (year%400==0))
                days = 29;
            else
                days = 28;
            break;
        default:
            if ((month==4)||(month==6)||(month==9)||(month==11))
                days = 30;
            else
                days = 31;
    }
    printf("The number of days in that month is %d",days);
    return 0;
}