/* WAP that displays the words that begins with a vowel and also write those words in a seperate file. */
#include<stdio.h>
#include<ctype.h>
int main(){
    FILE *fp,*fp1;
    char ch,buffer[200];
    fp = fopen("p19.txt","r");
    if(fp==NULL){
        printf("File opening failed.");
        return 1;
    }
    fp1 = fopen("p27.txt","w");
    if(fp1==NULL){
        printf("File opening failed.");
        return 1;
    }
    while((fscanf(fp,"%s",buffer))!=EOF){
        ch = buffer[0];
        ch = tolower(ch);
        if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
            fprintf(fp1,"%c",ch);
        }
    }
    fclose(fp);
    fclose(fp1);
    return 0;
}