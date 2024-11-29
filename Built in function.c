#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    
  
    printf("Enter the first string: ");
    
    
    scanf("%s", str1);
    
  
    printf("Enter the second string: ");
    scanf("%s", str2);
    
  
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    printf("Length of the first string: %d\n", len1);
    printf("Length of the second string: %d\n", len2);
    
  
    int result = strcmp(str1, str2);
    
    if (result == 0) {
        printf("Both strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is lexicographically smaller than the second.\n");
    } else {
        printf("The first string is lexicographically greater than the second.\n");
    }

    return 0;
}
