/* INSERTING 1 IN A CERTAIN POSITION */

#include<stdio.h>
int setBit(int num, int position) {
    return num | (1 << position);
}
int main() {
    int num, pos, update;
    printf("Enter the num : ");
    scanf("%d",&num);
    printf("Enter the position : ");
    scanf("%d",&pos);
    update = setBit(num,pos);
    printf("The original number = %d",num);
    printf("\nThe modified number = %d",update);
    return 0;
}