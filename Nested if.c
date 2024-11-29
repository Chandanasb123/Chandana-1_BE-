#include <stdio.h>

int main() {
    int num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

  
    if (num > 0) {
        printf("The number is positive.\n");

        
        if (num % 2 == 0) {
            printf("It is also an even number.\n");
        } else {
            printf("It is also an odd number.\n");
        }
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
