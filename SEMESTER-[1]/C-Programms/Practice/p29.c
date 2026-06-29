#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "cprogram";
    int l = strlen(str);
    int i,j;
    for(i=0;i<l;i++){
        for(j=0;j<=i;j++){
            printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}