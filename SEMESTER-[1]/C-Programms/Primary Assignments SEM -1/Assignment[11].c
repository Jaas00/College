/* Write a C program that defines a structure Student containing the attributes rollNumber,
name, and marks. Include a user-defined function named displayStudent with the
signature void displayStudent(struct Student s);. The function should display the details
of a student. */

#include<stdio.h>
struct Student {
    int rollNumber;
    char name[100];
    float marks;
};
void displayStudents(struct Student s) {
    printf("\nStudent Details :");
    printf("\nName            : %s",s.name);
    printf("\nRoll Number     : %d",s.rollNumber);
    printf("\nMarks Obtained  : %2.f",s.marks);
}
int main() {
    struct Student s;
    printf("Enter the name of the student : ");
    scanf(" %[^\n]",s.name);
    printf("\nEnter the Roll Number of the student : ");
    scanf("%d",&s.rollNumber);
    printf("\nEnter the Marks of the student : ");
    scanf("%f",&s.marks);
    displayStudents(s);
    return 0;
}