#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}


float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int choice;
    float temp, convertedTemp;

    printf("Temperature Conversion Program\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        convertedTemp = celsiusToFahrenheit(temp);
        printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temp, convertedTemp);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        convertedTemp = fahrenheitToCelsius(temp);
        printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temp, convertedTemp);
    } else {
        printf("Invalid choice! Please run the program again and select either 1 or 2.\n");
    }

    return 0;
}
