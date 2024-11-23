#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    int year;
    char publisher[100];
};

/**
 * Reads in the book information from the user and stores it in the provided
 * Book struct.
 *
 * @param book The Book struct to store the information in.
 */
void readBookInfo(struct Book *book) {
    printf("Enter book title: ");
    fgets(book->title, sizeof(book->title), stdin);
    book->title[strlen(book->title) - 1] = '\0'; // remove newline character

    // Read in the book author
    printf("Enter book author: ");
    fgets(book->author, sizeof(book->author), stdin);
    book->author[strlen(book->author) - 1] = '\0'; // remove newline character

    // Read in the book year
    printf("Enter book year: ");
    scanf("%d", &book->year);
    getchar(); // consume newline character

    // Read in the book publisher
    printf("Enter book publisher: ");
    fgets(book->publisher, sizeof(book->publisher), stdin);
    book->publisher[strlen(book->publisher) - 1] = '\0'; // remove newline character
}

void displayBookInfo(struct Book *book) {
    printf("Book Title: %s\n", book->title);
    printf("Book Author: %s\n", book->author);
    printf("Book Year: %d\n", book->year);
    printf("Book Publisher: %s\n", book->publisher);
}

int main() {
    struct Book book;
    readBookInfo(&book);
    displayBookInfo(&book);
    return 0;
}