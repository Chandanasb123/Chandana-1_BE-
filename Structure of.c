#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    // Declare a variable of type Student
    struct Student student1;

    // Input student details
    printf("Enter roll number: ");
    scanf("%d", &student1.rollNo);
    printf("Enter name: ");
    scanf(" %[^\n]s", student1.name); // Use %[^\n]s to read a string with spaces
    printf("Enter marks: ");
    scanf("%f", &student1.marks);

    // Display student details
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student1.rollNo);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
