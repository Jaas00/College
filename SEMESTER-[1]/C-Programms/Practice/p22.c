/* WAP to merge the contents of two files into another file. */
#include<stdio.h>
int main(){
    FILE *fp1,*fp2,*fp;
    char ch;
    fp1 = fopen("p19.txt","r");
    if(fp1==NULL){
        printf("File opening failed.");
        return 1;
    }
    fp2 = fopen("p20.txt","r");
    if(fp2==NULL){
        printf("File opening fialed.");
        return 1;
    }
    fp = fopen("p22.txt","w");
    if(fp==NULL){
        printf("File opening failed.");
        return 1;
    }
    while((ch=fgetc(fp1))!=EOF){
        fprintf(fp,"%c",ch);
    }
    while((ch=fgetc(fp2))!=EOF){
        fprintf(fp,"%c",ch);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp);
    return 0;
}