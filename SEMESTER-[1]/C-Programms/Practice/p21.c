/* WAP to read a file and display the content in the console. */
#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp = fopen("p19.txt","r");
    if(fp==NULL){
        printf("File opening failed.");
        return 1;
    }
    while(!feof(fp)){
        ch = fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}