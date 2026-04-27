/* WAP that prints a table indicating the number of occurrences of each alphabet in the text
entered as command line arguments.
 */

 #include<stdio.h>
 #include<ctype.h>
int main(int argc, char **argv){
    int count[26]={0};
    int i,j,l;
    for(i=1;i<argc;i++){
        for(j=0;argv[i][j]!='\0';j++){
            l = argv[i][j];
            l = tolower(l);
            if(!isalpha(l)){
                continue;
            }
            count[l - 'a']++;
        }
    }
    for(i=0;i<26;i++){
        if(count[i]>0){
            printf("\n%c : %d\n",(i + 'a'),count[i]);
        }
    }
    return 0;
}