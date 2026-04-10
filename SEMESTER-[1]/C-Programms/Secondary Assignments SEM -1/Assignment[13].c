/*  Write a function that reverses the elements of an array in place, using only a single
pointer argument, and return void. */
#include<stdio.h>
void rev(char *str) {
    char *start = str;
    char *end = str;
    if (str==NULL)
        return;
    while (*end++!='\0');
    if (end>start)
        end-=2;
    while (start<end) {
        *start = *start ^ *end;
        *end = *start ^ *end;
        *start = *start ^ *end;
        start++;
        end--;
    }
}
void main() {
    char str[] = "Hello";
    printf("The original string : %s",str);
    rev(str);
    printf("\nThe reversed string : %s",str);
}