/* WAP to reverse a string */
#include<stdio.h>
#include<string.h>
void Rev(char str[]){
    int i = 0,t, j = strlen(str)-1;
    while(i<j){
        t = str[i];
        str[i] = str[j];
        str[j] = t;
        i++;
        j--;
    }
}
int main(){
    char s[20];
    printf("Enter the string : ");
    gets(s);
    Rev(s);
    printf("The reversed string is : ");
    puts(s);
    return 0;
}