#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    int year;
    float price;
};

int main() {
    struct Book book;

    
    printf("Enter the title of the book: ");
    fgets(book.title, sizeof(book.title), stdin);

    printf("Enter the author of the book: ");
    fgets(book.author, sizeof(book.author), stdin);

    printf("Enter the publication year: ");
    scanf("%d", &book.year);

    printf("Enter the price of the book: ");
    scanf("%f", &book.price);

    // Display book details
    printf("\n--- Book Details ---\n");
    printf("Title: %s", book.title);
    printf("Author: %s", book.author);
    printf("Publication Year: %d\n", book.year);
    printf("Price: $%.2f\n", book.price);

    return 0;
}
