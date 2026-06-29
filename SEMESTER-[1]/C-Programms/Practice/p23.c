/* WAP to pass structure type data to a funnction getdata as reference
and display data without reference, defined structure has the field
empid,empname,empsal. */
#include<stdio.h>
typedef struct Emp{
    int empid;
    char empname[20];
    int empsal;
}emp;
void getdata(emp *e){
    printf("Enter id : ");
    scanf("%d",&e->empid);
    getchar();
    printf("Enter the name : ");
    gets(e->empname);
    printf("Enter sal");
    scanf("%d",&e->empsal);
}
void display(emp e){
    printf("The employ details : ");
    printf("%d",e.empid);
    puts(e.empname);
    printf("%d",e.empsal);
}
int main(){
    emp e;
    printf("Enter the employ details : ");
    getdata(&e);
    display(e);
    return 0;
}