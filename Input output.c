#include <stdio.h>

int main() {
    
    int num;
    float decimal;
    char character;


    printf("Enter an integer: ");
    
    scanf("%d", &num);

    printf("Enter a decimal number: ");
    
    scanf("%f", &decimal);

    
    printf("Enter a character: ");
  
    scanf(" %c", &character);  

    
    printf("\nYou entered:\n");
    printf("Integer: %d\n", num);
    printf("Decimal: %.2f\n", decimal);
    printf("Character: %c\n", character);

    return 0;
}
