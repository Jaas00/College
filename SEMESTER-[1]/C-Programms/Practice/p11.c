/* WAP to count number of vowel in a given string. */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int V(char str[]){
    int i = 0,c=0;
    while(str[i]!='\0'){
        if(str[i]==tolower('a')||str[i]==tolower('e')||str[i]==tolower('i')||str[i]==tolower('o')||str[i]==tolower('u'))
            c++;
            i++;
    }
    return c;
}
int main(){
    char s[20];
    int c;
    printf("Enter the string : ");
    gets(s);
    c = V(s);
    printf("The vowels are %d",c);
    return 0;
}