#include <stdio.h>

int main() {
    int birthYear, currentYear, age;

    // Ask the user for the year of birth
    printf("Enter your birth year: ");
    scanf("%d", &birthYear);

    
    printf("Enter the current year: ");
    scanf("%d", &currentYear);

    age = currentYear - birthYear;

    
    if (age < 0) {
        printf("Invalid input! Birth year cannot be greater than the current year.\n");
    } else {
        printf("Your age is: %d years\n", age);
    }

    return 0;
}
