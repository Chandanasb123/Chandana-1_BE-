#include <stdio.h>
#include <stdlib.h>

void encryptFile(const char *inputFile, const char *outputFile, int key) {
    FILE *fin = fopen(inputFile, "r");
    FILE *fout = fopen(outputFile, "w");

    if (fin == NULL || fout == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    char ch;
    while ((ch = fgetc(fin)) != EOF) {
        // Encrypt the character
        if (ch >= 'a' && ch <= 'z') {
            ch = 'a' + (ch - 'a' + key) % 26;
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = 'A' + (ch - 'A' + key) % 26;
        }
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);
    printf("File encrypted successfully!\n");
}

void decryptFile(const char *inputFile, const char *outputFile, int key) {
    FILE *fin = fopen(inputFile, "r");
    FILE *fout = fopen(outputFile, "w");

    if (fin == NULL || fout == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    char ch;
    while ((ch = fgetc(fin)) != EOF) {
        // Decrypt the character
        if (ch >= 'a' && ch <= 'z') {
            ch = 'a' + (ch - 'a' - key + 26) % 26;
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = 'A' + (ch - 'A' - key + 26) % 26;
        }
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);
    printf("File decrypted successfully!\n");
}

int main() {
    char inputFile[100], outputFile[100];
    int key, choice;

    printf("Enter the input file name: ");
    scanf("%s", inputFile);
    printf("Enter the output file name: ");
    scanf("%s", outputFile);
    printf("Enter the key (integer): ");
    scanf("%d", &key);

    printf("Choose an option:\n");
    printf("1. Encrypt file\n");
    printf("2. Decrypt file\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        encryptFile(inputFile, outputFile, key);
    } else if (choice == 2) {
        decryptFile(inputFile, outputFile, key);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
