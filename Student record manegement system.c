#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    int rollNumber;
    char name[50];
    float marks;
} Student;

Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Cannot add more students, database is full!\n");
        return;
    }
    printf("Enter Roll Number: ");
    scanf("%d", &students[studentCount].rollNumber);
    printf("Enter Name: ");
    getchar(); // to consume the newline character left by scanf
    fgets(students[studentCount].name, sizeof(students[studentCount].name), stdin);
    students[studentCount].name[strcspn(students[studentCount].name, "\n")] = '\0'; // remove newline
    printf("Enter Marks: ");
    scanf("%f", &students[studentCount].marks);

    studentCount++;
    printf("Student added successfully!\n");
}

void viewStudents() {
    if (studentCount == 0) {
        printf("No students in the database.\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("----------------------\n");
    }
}

void editStudent() {
    int rollNumber, found = 0;
    printf("Enter Roll Number of the student to edit: ");
    scanf("%d", &rollNumber);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == rollNumber) {
            found = 1;
            printf("Editing details for Roll Number %d\n", rollNumber);
            printf("Enter new Name: ");
            getchar();
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0'; // remove newline
            printf("Enter new Marks: ");
            scanf("%f", &students[i].marks);
            printf("Record updated successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Student with Roll Number %d not found.\n", rollNumber);
    }
}

void deleteStudent() {
    int rollNumber, found = 0;
    printf("Enter Roll Number of the student to delete: ");
    scanf("%d", &rollNumber);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == rollNumber) {
            found = 1;
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            printf("Record deleted successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Student with Roll Number %d not found.\n", rollNumber);
    }
}

int main() {
    int choice;

    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Edit Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                editStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
