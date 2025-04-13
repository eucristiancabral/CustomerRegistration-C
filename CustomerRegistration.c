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

        // Handle the selected option
        switch (option) {

            // Add new client
            case 1: {
                printf("Enter client's name: ");
                scanf(" %[^\n]", clients[clientCount].name);  // Read full name with spaces
    
                printf("Enter client's email: ");
                scanf(" %[^\n]", clients[clientCount].email); // Read full email with spaces
    
                clientCount++;  // Increase the count
    
                printf("-------------------------------\n");
                printf("Client added successfully!\n");
                break;
            }
    
            // View registered clients
            case 2: {
                if (clientCount == 0) {
                    printf("No clients registered.\n");
                } else {
                    printf("Registered clients:\n");
                    for (int i = 0; i < clientCount; i++) {
                        printf("Name: %s\n", clients[i].name);
                        printf("Email: %s\n", clients[i].email);
                        printf("-------------------------------\n");
                    }
                }
                break;
            }
    
            // Edit a client
            case 3: {
                char searchName[100];
                int found = 0;
    
                printf("Enter the name of the client to edit: ");
                scanf(" %[^\n]", searchName);
    
                for (int i = 0; i < clientCount; i++) {
                    if (strcmp(clients[i].name, searchName) == 0) {
                        printf("Enter the new name: ");
                        scanf(" %[^\n]", clients[i].name);
    
                        printf("Enter the new email: ");
                        scanf(" %[^\n]", clients[i].email);
    
                        printf("Client updated successfully.\n");
                        found = 1;
                        break;
                    }
                }
    
                if (!found) {
                    printf("Client not found.\n");
                }
    
                break;
            }
    
            // Delete a client
            case 4: {
                char searchName[100];
                int found = 0;
    
                printf("Enter the name of the client to delete: ");
                scanf(" %[^\n]", searchName);
    
                for (int i = 0; i < clientCount; i++) {
                    if (strcmp(clients[i].name, searchName) == 0) {
                        // Shift remaining clients
                        for (int j = i; j < clientCount - 1; j++) {
                            clients[j] = clients[j + 1];
                        }
                        clientCount--;
                        printf("Client deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }
    
                if (!found) {
                    printf("Client not found.\n");
                }
    
                break;
            }
    
            // Exit
            case 5:
                printf("Program terminated.\n");
                break;
    
            // Invalid option
            default:
                printf("Invalid option.\n");
                break;
            }
    
    } while (option != 5);  // Loop until exit
    
}