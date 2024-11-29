#include <stdio.h>

int main() {
    int i = 1;


    do {
        printf("Iteration number: %d\n", i);
        i++;
    } while(i <= 5);  // Condition to check after the loop body is executed

    return 0;
}
