#include <stdio.h>


int add(int a, int b);

int main() {
    int num1, num2, result;

  
    printf("Enter two numbers);
    scanf("%d %d", &num1, &num2);


    result = add(num1, num2);

  
    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}

int add(int a, int b) {
    return a + b;  // Return the sum of a and b
}
