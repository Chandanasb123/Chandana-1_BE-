#include <stdio.h>

// Define a structure to store employee details
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    int n;
    float totalSalary = 0.0, averageSalary;

    // Get the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Create an array of structures
    struct Employee employees[n];

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        totalSalary += employees[i].salary; // Add to total salary
    }

    // Calculate average salary
    averageSalary = totalSalary / n;

    // Display employee details and the average salary
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d: Name: %s, ID: %d, Salary: %.2f\n", 
               i + 1, employees[i].name, employees[i].id, employees[i].salary);
    }
    printf("\nAverage Salary: %.2f\n", averageSalary);

    return 0;
}
