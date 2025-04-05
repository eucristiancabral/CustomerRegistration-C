#include <stdio.h>     // Standard input/output library
#include <stdlib.h>    // Standard library
#include <string.h>    // String manipulation functions

// Structure to store client data
struct Client {
    char name[100];
    char email[100];
};

/* Main function */
int main() {
    struct Client clients[100];  // Array to store up to 100 clients
    int option, clientCount = 0; // 'option' stores the menu selection, 'clientCount' keeps track of the number of clients

    // Main menu loop
    do {
        // Display menu options
        printf("-------------------------------\n");
        printf("WHAT DO YOU WANT TO DO?\n");
        printf("-------------------------------\n");
        printf("1 - Add new client\n");
        printf("2 - View clients\n");
        printf("3 - Edit client\n");
        printf("4 - Delete client\n");
        printf("5 - Exit\n");
        printf("-------------------------------\n");
        printf("Select an option: ");
        scanf("%d", &option);
        getchar(); // Clears the input buffer

    } while (option != 5);  // Loop until exit
    
}