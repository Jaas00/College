/* WAP that displays the source code in the output console. */
#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp = fopen(__FILE__,"r");
    if(fp==NULL){
        printf("File openinng failed.");
        return 1;
    }
    while(((ch=fgetc(fp)))!=EOF){
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}