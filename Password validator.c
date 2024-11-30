#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidPassword(char *password) {
    int length = 0, hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    const char *specialCharacters = "!@#$%^&*()_+-=~`[]{}|:;\"'<>,.?/";

    length = strlen(password);

    
    if (length < 8) {
        return 0;
    }

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) hasUpper = 1;
        if (islower(password[i])) hasLower = 1;
        if (isdigit(password[i])) hasDigit = 1;
        if (strchr(specialCharacters, password[i])) hasSpecial = 1;
    }

    
    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    char password[100];

    printf("Enter your password: ");
    scanf("%s", password);

    if (isValidPassword(password)) {
        printf("Password is valid.\n");
    } else {
        printf("Password is invalid. It must be at least 8 characters long and include uppercase, lowercase, digits, and special characters.\n");
    }

    return 0;
}
