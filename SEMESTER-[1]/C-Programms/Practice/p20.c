/* WAP to copy the content of one file to another file. */
#include<stdio.h>
int main(){
    FILE *fp1,*fp2;
    char buffer[200];
    fp1 = fopen("p19.txt","r");
    if(fp1==NULL){
        printf("File opening failed.");
        return 1;
    }
    fp2 = fopen("p20.txt","w");
    if(fp2==NULL){
        printf("File opening failed.");
        return 1;
    }
    while(fgets(buffer,200,fp1)!=NULL){
        fputs(buffer,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;

}