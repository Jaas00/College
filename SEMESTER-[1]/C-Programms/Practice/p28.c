/* WAP which reads some integers from a file,
finds the odd numbers from the file and keeps those number into a new file
named as "oddfile.txt" else "evenfile.txt" */
#include<stdio.h>
int main(){
    FILE *fp,*fp1,*fp2;
    int n;
    fp = fopen("p28.txt","r");
    if(fp==NULL){
        printf("File opening failed.");
        return 1;
    }
    fp1 = fopen("even.txt","w");
    if(fp==NULL){
        printf("File opening failed.");
        return 1;
    }
    fp2 = fopen("odd.txt","w");
    if(fp==NULL){
        printf("File opening failed.");
        return 1;
    }
    while(fscanf(fp,"%d",&n)!=EOF){
        if(n%2==0){
            fprintf(fp1,"%d\n",n);
        }
        else{
            fprintf(fp2,"%d\n",n);
        }
    }
    fclose(fp);
    fclose(fp1);
    fclose(fp2);
    return 0;
}