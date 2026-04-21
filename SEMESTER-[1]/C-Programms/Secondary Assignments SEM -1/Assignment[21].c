/* Write a program to copy the contents of a text file to another file, after removing all
white spaces (spaces, tabs, newlines).
 */

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("input.txt","r");
    fp2 = fopen("output.txt","w");
    if(fp1 == NULL){
        printf("File opening Failed!!!");
        exit(1);
    }
    if(fp2 == NULL){
        printf("File opening Failed!!!");
        exit(2);
    }
    while((ch = fgetc(fp1)) != EOF){
        if(!isspace(ch))
            fprintf(fp2,"%c",ch);
            //fputc(ch, fp2);
    }
    printf("Check your output.txt file.");
    fclose(fp1);
    fclose(fp2);
    return 0;
}