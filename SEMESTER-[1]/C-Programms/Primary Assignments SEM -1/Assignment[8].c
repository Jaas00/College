/* COUNTING 1s INSIDE A DECIMEL NUMBER */

#include<stdio.h>
int countSetBits(int num) {
    int count = 0;
    while (num>0) {
        if (num & 1)
            count++;
        num = num >> 1;
    }
    return count;
}
int main() {
    int num, count;
    printf("Enter the number : ");
    scanf("%d",&num);
    count = countSetBits(num);
    printf("The number of set bits = %d",count);
    return 0;
}