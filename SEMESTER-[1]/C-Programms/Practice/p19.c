/* WAP to count the number of characters in a file. */
#include<stdio.h>
int main(){
    FILE *fp;
    int ch;
    int c = 0;
    fp = fopen("p19.txt","r");
    if(fp==NULL){
        printf("File opening failed.");
        return 1;
    }
    while((ch=fgetc(fp)!=EOF)){
        c++;
    }
    printf("The number of charactes : %d",c);
    fclose(fp);
    return 0;
}