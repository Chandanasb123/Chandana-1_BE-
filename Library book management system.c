#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100


typedef struct {
    int id;
    char title[100];
    char author[100];
} Book;


Book library[MAX_BOOKS];
int bookCount = 0;
void addBook();
void searchBook();
void deleteBook();
void displayBooks();

int main() {
    int choice;

    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Delete Book\n");
        printf("4. Display All Books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                searchBook();
                break;
            case 3:
                deleteBook();
                break;
            case 4:
                displayBooks();
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}


void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Library is full. Cannot add more books.\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &library[bookCount].id);
    printf("Enter Book Title: ");
    getchar(); 
    fgets(library[bookCount].title, sizeof(library[bookCount].title), stdin);
    library[bookCount].title[strcspn(library[bookCount].title, "\n")] = 0; // Remove newline
    printf("Enter Book Author: ");
    fgets(library[bookCount].author, sizeof(library[bookCount].author), stdin);
    library[bookCount].author[strcspn(library[bookCount].author, "\n")] = 0; // Remove newline

    bookCount++;
    printf("Book added successfully.\n");
}


void searchBook() {
    char searchTitle[100];
    int found = 0;

    printf("Enter the title of the book to search: ");
    getchar(); 
    fgets(searchTitle, sizeof(searchTitle), stdin);
    searchTitle[strcspn(searchTitle, "\n")] = 0; 

    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].title, searchTitle) == 0) {
            printf("\nBook Found:\n");
            printf("ID: %d\n", library[i].id);
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}


void deleteBook() {
    int deleteId, found = 0;

    printf("Enter the ID of the book to delete: ");
    scanf("%d", &deleteId);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == deleteId) {
            for (int j = i; j < bookCount - 1; j++) {
                library[j] = library[j + 1];
            }
            bookCount--;
            printf("Book deleted successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

void displayBooks() {
    if (bookCount == 0) {
        printf("No books in the library.\n");
        return;
    }

    printf("\nBooks in the Library:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("ID: %d\n", library[i].id);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("---------------------\n");
    }
}
