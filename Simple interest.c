#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Input the values for principal, rate, and time
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Output the result
    printf("The Simple Interest is: %.2f\n", simpleInterest);

    return 0;
}
