/* Write a C program that accepts a string as a command line argument and includes a user-defined
function named isPalindrome with the signature
int isPalindrome(char str[]);.
The function should check if the given string is a palindrome and return 1 if it is, and 0
otherwise.  */

#include<stdio.h>
#include<string.h>
int isPalindrome(char str[]) {
    int len,i,j;
    len = strlen(str);
    i = 0;
    j = len - 1;
    while (i<j) {
        if (str[i]!=str[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}
int main(int argc, char *argv[]) {
    if (argc!=2) {
        printf("Invalid Input.");
        return 1;
    }
    if (isPalindrome(argv[1]))
        printf("This string is a Palindrome.");
    else
        printf("This string is not a Palindrome.");
    return 0;
}