/* WAP using userdefined method to implement the following :
Java Prog Mastery = JPM */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void S(char str[], char str2[]){
    int i = 1,j = 0;
    str2[j++] = toupper(str[0]);
    while(str[i]!='\0'){
        if(str[i] == ' '){
            str2[j++] = toupper(str[i+1]);
        }
        i++;
    }
    str2[j] = '\0';
}
int main(){
    char str[20],str2[10];
    printf("Enter the string : ");
    gets(str);
    S(str,str2);
    printf("The short : ");
    puts(str2);
    return 0;
}