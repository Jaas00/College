/* WAP to perform following actions on an array entered by the user :
a. Print the even-valued elements
b. Print the odd-valued elements
c. Calculate and print the sum and average of the elements of array
d. Print the maximum and minimum element of array
e. Remove the duplicates from the array
f. Print the array in reverse order
(The program should present a menu to the user and ask for one of the options. The menu
should also include options to re-enter the array and to quit the program.)
 */

#include <stdio.h>
#include <stdlib.h>
void getdata(int*, int*);
void display(int*, int*);
void even(int*, int*);
void odd(int*, int*);
int Sum(int*, int*);
float Ava(int*, int*);
int Max(int*, int*);
int Min(int*, int*);
void Dub(int*, int*);
void Rev(int*, int*);
void Data();

int main() {
    Data();
    return 0;
}
void Data() {
    int n = 0, *arr = NULL, choice;
    int sum, max, min;
    float av;
    while (1) {
        printf("\n--- ARRAY OPERATIONS MENU ---");
        printf("\n1. Enter / Re-enter Array");
        printf("\n2. Print Even-valued elements");
        printf("\n3. Print Odd-valued elements");
        printf("\n4. Calculate Sum and Average");
        printf("\n5. Print Maximum and Minimum");
        printf("\n6. Remove Duplicates");
        printf("\n7. Print Array in Reverse");
        printf("\n8. Quit");
        printf("\nSelect an option: ");
        scanf("%d", &choice);
        if (choice > 1 && choice < 8 && arr == NULL) {
            printf("\nError: Please enter the array first (Option 1).\n");
            continue;
        }
        switch (choice) {
            case 1:
                if (arr != NULL) free(arr); 
                printf("Enter the size of the array: ");
                scanf("%d", &n);
                arr = (int*)calloc(n, sizeof(int));
                getdata(arr, &n);
                break;
            case 2:
                printf("Even elements: ");
                even(arr, &n);
                printf("\n");
                break;
            case 3:
                printf("Odd elements: ");
                odd(arr, &n);
                printf("\n");
                break;
            case 4:
                sum = Sum(arr, &n);
                av = Ava(arr, &n);
                printf("Sum = %d, Average = %g\n", sum, av);
                break;
            case 5:
                max = Max(arr, &n);
                min = Min(arr, &n);
                printf("Max = %d, Min = %d\n", max, min);
                break;
            case 6:
                printf("Removing duplicates...\n");
                Dub(arr, &n);
                printf("\n");
                break;
            case 7:
                printf("Reversing array...\n");
                Rev(arr, &n);
                printf("\n");
                break;
            case 8:
                printf("You have succesfully exited the program.\n");
                if (arr != NULL) free(arr);
                return;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
void getdata(int *a, int *n) {
    int i;
    printf("Enter the array elements: \n");
    for (i = 0; i < *n; i++) scanf("%d", a + i);
}
void display(int *a, int *n) {
    int i;
    for (i = 0; i < *n; i++) printf("%d ", *(a + i));
}
void even(int *a, int *n) {
    int i;
    for (i = 0; i < *n; i++) {
        if (a[i] % 2 == 0) printf("%d ", a[i]);
    }
}
void odd(int *a, int *n) {
    int i;
    for (i = 0; i < *n; i++) {
        if (a[i] % 2 != 0) printf("%d ", a[i]);
    }
}
int Sum(int *a, int *n) {
    int i, s = 0;
    for (i = 0; i < *n; i++) s += a[i];
    return s;
}
float Ava(int *a, int *n) {
    if (*n == 0) return 0;
    return (float)Sum(a, n) / (*n);
}
int Max(int *a, int *n) {
    int i, m = a[0];
    for (i = 1; i < *n; i++) {
        if (m < a[i]) m = a[i];
    }
    return m;
}
int Min(int *a, int *n) {
    int i, m = a[0];
    for (i = 1; i < *n; i++) {
        if (m > a[i]) m = a[i];
    }
    return m;
}
void Dub(int *a, int *n) {
    int i, j, k;
    for (i = 0; i < *n; i++) {
        for (j = i + 1; j < *n; j++) {
            if (a[i] == a[j]) {
                for (k = j; k < *n - 1; k++) a[k] = a[k + 1];
                (*n)--;
                j--;
            }
        }
    }
    printf("Result: ");
    display(a, n);
}
void Rev(int *a, int *n) {
    int i, temp, l = *n;
    for (i = 0; i < l / 2; i++) {
        temp = a[i];
        a[i] = a[l - 1 - i];
        a[l - 1 - i] = temp;
    }
    printf("Result: ");
    display(a, n);
}