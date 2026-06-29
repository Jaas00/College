/* WAP to count number of words in a file.
perform file reading operation using fgetc(). */
#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int w = 0;
    fp = fopen("p19.txt","r");
    if(fp==NULL){
        printf("File opening failed.");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF){
        if(ch==' '){
            w++;
        }
    }
    if(w>0){
        printf("The number of words : %d",w+1);
    }
    fclose(fp);
    return 0;
}