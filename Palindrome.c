#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversedStr[100];
    int i, length, flag = 1;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    length = strlen(str);

    // Reverse the string
    for (i = 0; i < length; i++) {
        reversedStr[i] = str[length - i - 1];
    }
    reversedStr[length] = '\0'; // Add null terminator

    // Check if the original string and reversed string are the same
    for (i = 0; i < length; i++) {
        if (str[i] != reversedStr[i]) {
            flag = 0; // Not a palindrome
            break;
        }
    }

    if (flag) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
