/* Write a program that counts the number of occurrences of each alphabet (A-Z, a-z) in
the text entered using Command-Line Arguments. */
#include<stdio.h>
int main(int argc, char **argv) {
    int i,j,arr[256]={0};
    char ch;
    if (argc<2) {
        printf("Enter some values.");
        return 1;
    }
    for (i=1;i<argc;i++) {
        for (j=0;argv[i][j]!='\0';j++) {
            ch = argv[i][j];
            if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
                arr[ch]++;
        }
    }
    for (i=0;i<256;i++) {
        if (arr[i]>0)
            printf("%c  :   %d\n",i,arr[i]);
    }
    return 0;
}