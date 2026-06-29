/* WAP using function which concatenates two strings s1 and s2 into a third string s3 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void St(char s1[],char s2[],char s3[]){
    int i,j,k;
    i=j=k=0;
    while(s1[i]!='\0'){
        s3[k++] = s1[i++];
    }
    while(s2[j]!='\0'){
        s3[k++] = s2[j++];
    }
    s3[k] = '\0';
}
int main(){
    char s1[20],s2[20],*s3;
    int l1 = strlen(s1),l2 = strlen(s2);

    s3 = (char*)malloc((l1+l2+1)*sizeof(char));
    printf("Enter the 1 string : ");
    gets(s1);
    printf("Enter the 2 string");
    gets(s2);
    St(s1,s2,s3);
    printf("The con string is : ");
    puts(s3);
    free(s3);
    return 0;
}