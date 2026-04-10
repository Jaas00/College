/* Write a C program that takes multiple integers as command-line arguments and finds the
maximum and minimum value among them. */

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv) {
    long max,min,i,n;
    char *endptr;
    if (argc<2) {
        printf("Enter some Integer numbers.");
        exit(1);
    }
    max = min = strtol(argv[1],&endptr,10);
    if (*endptr != '\0') {
        printf("Enter some valide Integers.");
        exit(2);
    }
    for (i=2;i<argc;i++) {
        n = strtol(argv[i],&endptr,10);
        if (*endptr!='\0') {
            printf("Enter some valide Integers.");
            exit(3);
        }
        if (n>max)
            max = n;
        if (n<min)
            min = n;
    }
    printf("The maximum value is : %ld",max);
    printf("\nThe minimum value is : %ld",min);
    return 0;
}