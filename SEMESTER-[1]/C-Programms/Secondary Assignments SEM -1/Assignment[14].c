/*  Write a menu-driven program to perform the following string operations:
a. Show address of each character
b. Concatenate two strings without using strcat()
c. Concatenate two strings using strcat()
d. Compare two strings
e. Find string length using pointers
f. Convert lowercase to uppercase
g. Convert uppercase to lowercase
h. Count number of vowels
i. Reverse the string */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void Menu();
void Getstr(char**,char**,char**);
void Address(char*);
void Scat(char*,char*,char*);
void sCat(char*, char *, char*);
void Comp(char*,char*);
void Slength(char*);
void toUpper(char*);
void toLower(char*);
void CntVowels(char*);
void reverse(char*);
void SwitchNull(char*);

int main() {
    Menu();
    return 0;
}
void Menu(void) {
    char *str,*str1,*str2;
    char ch;
    Getstr(&str,&str1,&str2);
    printf("Click b/c to use rest of the options.\n");
    do {
        printf("\n========== STRING MENU ==========\n");
        printf("a. Show address of each character\n");
        printf("b. Concatenate two strings without using strcat()\n");
        printf("c. Concatenate two strings using strcat()\n");
        printf("d. Compare two strings\n");
        printf("e. Find string length using pointers\n");
        printf("f. Convert lowercase to uppercase\n");
        printf("g. Convert uppercase to lowercase\n");
        printf("h. Count number of vowels\n");
        printf("i. Reverse the string\n");
        printf("q. Quit the program\n");
        printf("=================================\n");
        printf("Enter your choice: ");
        scanf(" %c", &ch);
        switch(ch) {
            case 'a': Address(str1); break;
            case 'b': Scat(str, str1, str2); break;
            case 'c': sCat(str, str1, str2); break;
            case 'd': Comp(str1, str2); break;
            case 'e': Slength(str); break;
            case 'f': toUpper(str); break;
            case 'g': toLower(str); break;
            case 'h': CntVowels(str); break;
            case 'i': reverse(str); break;
            case 'q': printf("\nYou have exited the program.\n"); break;
            default: printf("\nInvalid choice! Please pick a letter from a to i, or q.\n");
        }
    }
    while (ch!='q');
    free(str); free(str1); free(str2);
}
void Getstr(char **str,char **str1,char **str2) {
    int n,n1,n2;
    printf("Enter the size of the first string : ");
    scanf("%d",&n1);
    printf("Enter the size of the second string : ");
    scanf("%d",&n2);
    n=n1+n2;
    while (getchar()!='\n');
    *str = (char*)calloc(n+1,sizeof(char));
    *str1 = (char*)calloc(n1+1,sizeof(char));
    *str2 = (char*)calloc(n2+1,sizeof(char));
    if ((*str == NULL)||(*str1 == NULL)||(*str2 == NULL)){
        printf("Memory allocation failed!!!");
        exit(1);
    }
    printf("Enter the first string : ");
    fgets(*str1,n1+1,stdin);
    SwitchNull(*str1);
    printf("Enter the second string : ");
    fgets(*str2,n2+1,stdin);
    SwitchNull(*str2);
}
void Address(char *str) {
    int i;
    for (i=0;str[i]!='\0';i++) {
        printf("\nThe address of the %dth element : %p",i,&str[i]);
    }
}
void Scat(char *s,char *s1,char *s2) {
    int i,j,k;
    i=j=k=0;
    while (s1[i]!='\0') {
        s[k++]=s1[i++];
    }
    while (s2[j]!='\0') {
        s[k++]=s2[j++];
    }
    s[k]='\0';
    printf("\nThe Concat string using user defined function is : '%s'\n",s);
}
void sCat(char *s, char *s1, char *s2) {
    strcpy(s,s1);
    strcat(s,s2);
    printf("\nThe Concatenate string using library function is : '%s'",s);
}
void Comp(char *s1, char *s2) {
    strcmp(s1,s2)?printf("\nTwo strings are not equal."):printf("\nTwo strings are equal.");
}
void Slength(char *str) {
    char *ptr = str;
    int cnt = 0;
    while (*ptr!='\0') {
        cnt++;
        ptr++;
    }
    printf("\nThe length of the string is %d",cnt);
}
void toUpper(char *str) {
    int i=0;
    while (str[i]!='\0') {
        if ((str[i]>='a')&&(str[i]<='z')) {
            str[i] -= 32;
        }
        i++;
    }
    printf("\nThe string in UPPER case is : %s",str);
}
void toLower(char *str) {
    int i=0;
    while (str[i]!='\0') {
        if ((str[i]>='A')&&(str[i]<='Z')) {
            str[i] += 32;
        }
        i++;
    }
    printf("\nThe string in lower case is : %s",str);
}
void CntVowels(char *str) {
    int i=0,cnt=0;
    char ch;
    while (str[i]!='\0') {
        ch = tolower(str[i]);
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
            cnt++;
        }
        i++;
    }
    printf("\nThe vowels in the string is : %d",cnt);
}
void reverse(char *str) {
    int i=0, j=strlen(str)-1;
    while (i<j) {
        str[i] = str[i]^str[j];
        str[j] = str[i]^str[j];
        str[i] = str[i]^str[j];
        i++;j--;
    }
    printf("\nThe reversed string is : %s",str);
}
void SwitchNull(char *str) {
    int i;
    for (i=0;str[i]!='\0';i++) {
        if (str[i]=='\n') {
            str[i]='\0';
            break;
        }
    }
}