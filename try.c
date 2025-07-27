#include <stdio.h>
#include <string.h>

struct Book {
    char name[50];
    int isIssued;  // 0 = available, 1 = issued
};

struct Book book;

int main() {
    int choice = 1; 

    while (choice != 0) {
        printf("\n1. Add Book\n2. Issue Book\n3. Return Book\n4. Show Book\n0. Exit\n");
        printf("Enter choice: ");
        scanf(" %d", &choice);

        if (choice == 1) {
            printf("Enter book name: ");
            scanf(" %[^\n]", book.name);  
            book.isIssued = 0;
            printf("Book Added!\n");
        }
        else if (choice == 2) {
            if (!book.isIssued) {
                book.isIssued = 1;
                printf("Book Issued!\n");
            } else {
                printf("Book already issued!\n");
            }
        }
        else if (choice == 3) {
            if (book.isIssued) {
                book.isIssued = 0;
                printf("Book Returned!\n");
            } else {
                printf("Book was not issued!\n");
            }
        }
        else if (choice == 4) {
            printf("Book: %s, Status: %s\n", book.name, book.isIssued ? "Issued" : "Available");
        }
        else if (choice != 0) {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
