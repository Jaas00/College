#include<stdio.h>
int main() {
    FILE *f;
    int ch;
    f = fopen(__FILE__,"r");
    if (f==NULL) {
        printf("ERROR : File opening FAILED!");
        return 1;
    }
    ch = fgetc(f);
    while (ch != EOF) {
        printf("%c",ch);
        ch = fgetc(f);
    }
    fclose(f);
    return 0;
}