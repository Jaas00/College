/* WAP to perform addition of two complex number having fields real and imaginary of type int. */
#include<stdio.h>
typedef struct complex{
    int real;
    int img;
}C;
void getdata(C *com){
    printf("Enter the real number : ");
    scanf("%d",&com->real);
    printf("Enter the img number : ");
    scanf("%d",&com->img);
}
void display(C *com){
    printf("The addition is %d + %di",com->real,com->img);
}
void Add(C c1, C c2, C c3){
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    display(&c3);
}
int main(){
    C c1,c2,c3;
    printf("Enter the first field : \n");
    getdata(&c1);
    printf("Enter the second field : \n");
    getdata(&c2);
    Add(c1,c2,c3);
    return 0;
}