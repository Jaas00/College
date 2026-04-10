/* Write a C program that reads a sequence of integers from a file named 'input.txt'. This
program should segregate the odd numbers from the even numbers and store the odd
numbers in a new file named 'ODDFile.txt' while storing the even numbers in another file
named 'EVENFile.txt' */
#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *fIn, *fEven, *fOdd;
    int n;
    fIn = fopen("input.txt","r");
    fEven = fopen("EVENFile.txt","w");
    fOdd = fopen("ODDFile.txt","w");
    if ((fIn==NULL)||(fEven==NULL)||(fOdd==NULL)) {
        printf("ERROR : one or more file opening FAILED!");
        if (fIn!=NULL) fclose(fIn);
        if (fEven!=NULL) fclose(fEven);
        if (fOdd!=NULL) fclose(fOdd);
        exit(1);
    }
    while (fscanf(fIn,"%d",&n)!=EOF)
        (n%2==0)?fprintf(fEven,"%d\n",n):fprintf(fOdd,"%d\n",n);
    fclose(fIn);
    fclose(fEven);
    fclose(fOdd);
    printf("OPERATION COMPLETED SUCCESSFULLY.");
    return 0;
}