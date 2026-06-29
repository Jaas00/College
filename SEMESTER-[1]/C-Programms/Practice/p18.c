/* WAP to find the maximum of n numbers passed through command line argument. */
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    int n, max,i=2;
    if(argc<2){
        printf("Enter some values : ");
        exit(1);
    }
    max = atoi(argv[1]);
    while(i<argc){
        if(max<atoi(argv[i])){
            max = atoi(argv[i]);
        }
        i++;
    }
    printf("The maximum element is %d",max);
    return 0;
}
