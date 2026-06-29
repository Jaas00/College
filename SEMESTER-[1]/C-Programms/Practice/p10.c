/* WAP to check if a string is palindrome or not. */
#include<stdio.h>
#include<string.h>
int Pal(char str[]){
    int i = 0, j = strlen(str)-1;
    while(i<j){
        if(str[i]!=str[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main(){
    char str[20];
    printf("Enter the string : ");
    gets(str);
    if(Pal(str))
        printf("Palindrome.");
    else
        printf("Not palindrome.");
    return 0;
}