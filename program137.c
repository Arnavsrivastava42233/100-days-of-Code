//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

// Define an enum for user roles
enum UserRole {
    GUEST = 1,
    USER,
    ADMIN
};

// Function to display messages based on the role
void displayRoleMessage(enum UserRole role) {
    switch (role) {
        case ADMIN:
            printf("Welcome, Administrator! You have full access and control over system settings.\n");
            break;
            
        case USER:
            printf("Welcome back, User! You can view and update your profile.\n");
            break;
            
        case GUEST:
            printf("Welcome, Guest! You are browsing with limited permissions. Please log in.\n");
            break;
            
        default:
            printf("Error: Invalid user role.\n");
            break;
    }
}

int main() {
    // Test different user roles
    printf("--- Testing Role-Based Messages ---\n\n");

    printf("1. Testing GUEST role:\n");
    displayRoleMessage(GUEST);
    
    printf("\n2. Testing USER role:\n");
    displayRoleMessage(USER);
    
    printf("\n3. Testing ADMIN role:\n");
    displayRoleMessage(ADMIN);

    return 0;
}