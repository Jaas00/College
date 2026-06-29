/* WAP to concatenate two strings without using library methode. */
#include<stdio.h>
#include<string.h>
void scat(char str1[],char str2[]){
    int i = strlen(str1),j = 0;
    while(str2[j]!='\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}
int main(){
    char s1[20],s2[20];
    printf("Enter the 1 srting : ");
    gets(s1);
    printf("\nEnter the 2 string : ");
    gets(s2);
    printf("The Concated string is : ");
    scat(s1,s2);
    puts(s1);
    return 0;
}