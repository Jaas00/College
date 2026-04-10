/* Write a C program that takes multiple integers as command-line arguments and finds the
maximum and minimum value among them. */
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv) {
    int min,max,n,i;
    if (argc<2) {
        printf("Enter some values.");
        return 1;
    }
    max = min = atoi(argv[1]);
    for (i=2;i<argc;i++) {
        n = atoi(argv[i]);
        if (n>max)
            max = n;
        if (n<min)
            min = n;
    }
    printf("The maximum value is : %d",max);
    printf("\nThe minimum value is : %d",min);
    return 0;
}