/* WAP that reads the source code "source.c" and writes the content into another file "source.exe". */
#include<stdio.h>
int main(){
    FILE *fp,*fp1;
    char ch;
    fp = fopen(__FILE__,"r");
    fp1 = fopen("source.exe","w");
    if(fp==NULL){
        printf("File opening failed.");
        return 1;
    }
    if(fp1==NULL){
        printf("File opening failed.");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF){
        fprintf(fp1,"%c",ch);
    }
    fclose(fp);
    fclose(fp1);
    return 0;

}