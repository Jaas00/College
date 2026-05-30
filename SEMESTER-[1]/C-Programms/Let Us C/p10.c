/* Write a C program to find the grace marks for a student using switch.
The user should enter the class obtained by the student and the
number of subjects he has failed in. Use the following logic:

    If the student gets first class and he fails in more than 3
    subjects, he does not get any grace. Otherwise, he gets a grace
    of 5 marks per subject.

    If the student gets second class and he fails in more than 2
    subjects, he does not get any grace. Otherwise, he gets a grace
    of 4 marks per subject.

    If the student gets third class and he fails in more than 1
    subject, then he does not get any grace. Otherwise, he gets a
    grace of 5 marks. */

/* Write a C program to find the grace marks for a student using switch. */

#include <stdio.h>

int main() {
    int student_class, failed_subjects;
    int grace_marks = 0;

    // 1. Get the inputs from the user
    printf("Enter the class obtained by the student (1, 2, or 3): ");
    scanf("%d", &student_class);

    printf("Enter the number of subjects failed: ");
    scanf("%d", &failed_subjects);

    // 2. Use a switch statement to evaluate the class
    switch (student_class) {
        
        case 1: // Logic for First Class
            if (failed_subjects > 3) {
                grace_marks = 0;
            } else {
                // 5 marks per failed subject
                grace_marks = 5 * failed_subjects; 
            }
            break;

        case 2: // Logic for Second Class
            if (failed_subjects > 2) {
                grace_marks = 0;
            } else {
                // 4 marks per failed subject
                grace_marks = 4 * failed_subjects; 
            }
            break;

        case 3: // Logic for Third Class
            if (failed_subjects > 1) {
                grace_marks = 0;
            } else {
                // 5 marks per failed subject (If failed = 1, they get 5. If failed = 0, they get 0).
                grace_marks = 5 * failed_subjects; 
            }
            break;

        default: // Catch invalid inputs
            printf("Invalid class entered! Please enter 1, 2, or 3.\n");
            return 1; // Exit the program early with an error code
    }

    // 3. Display the final result
    if (grace_marks > 0) {
        printf("\nThe student receives a total of %d grace marks.\n", grace_marks);
    } else if (failed_subjects == 0) {
         printf("\nThe student passed all subjects and needs no grace marks!\n");
    } else {
        printf("\nThe student does not receive any grace marks.\n");
    }

    return 0;
}