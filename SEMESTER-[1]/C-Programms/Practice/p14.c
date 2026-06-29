/* WAP to count the total number of 1's in the binary representaion of an integer. */
#include<stdio.h>
int C(unsigned int n){
    int c = 0;
    while(n!=0){
        if(n&1){
            c++;
        }
        n = n>>1;
    }
    return c;
}
int main(){
    int n,c;
    printf("Enter the number : ");
    scanf("%d",&n);
    c = C(n);
    printf("The 1's are : %d",c);
    return 0;
}