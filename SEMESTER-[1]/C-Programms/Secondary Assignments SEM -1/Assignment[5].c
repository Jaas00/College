/* Write a function to check whether a given string is a palindrome. Use this function to
determine whether an entered string is Palindrome. */
#include<stdio.h>
#include<stdlib.h>
int isPalindrome(char*);
int main() {
    int n,i;
    char *str;
    printf("Enter the size of the string :");
    scanf("%d",&n);
    str = (char*)malloc(n*sizeof(char));
    if (str==NULL) {
        printf("Memory allocation failed!");
        exit(1);
    }
    printf("Enter the number of elements : ");
    scanf("%s",str);
    if (isPalindrome(str))
        printf("This is a Palindrome.");
    else
        printf("This is not a Palindrome.");
    free(str);
    return 0;
}
int isPalindrome(char *str) {
    int i,len = 0;
    while (str[len]!='\0')
        len++;
    for (i=0;i<len/2;i++) {
        if (str[i]==str[len-1-i])
            return 1;
    }
    return 0;
}