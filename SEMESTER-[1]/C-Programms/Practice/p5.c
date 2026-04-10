#include <stdio.h>

int my_var = 100;

int main() {
    auto int my_var = 50;

    printf("Shadowed local my_var: %d\n", my_var);

    return 0;
}