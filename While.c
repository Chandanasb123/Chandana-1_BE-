#include <stdio.h>

int main() {
    int count = 1; // Initialize counter

    // Start the while loop
    while (count <= 10) {
        printf("%d\n", count); // Print the current value of count
        count++; // Increment the counter
    }

    printf("Finished counting from 1 to 10.\n");

    return 0;
}
