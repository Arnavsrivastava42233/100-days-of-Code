//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch
#include <stdio.h>

// Define enum to represent menu choices
enum MenuChoice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int inputChoice;
    double num1, num2, result;

    // Display the menu
    printf("=== Calculator Menu ===\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice (1-3): ");
    
    if (scanf("%d", &inputChoice) != 1) {
        printf("Invalid input format.\n");
        return 1;
    }

    // Prompt for operands
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Invalid numbers entered.\n");
        return 1;
    }

    // Cast the integer input to the enum type for the switch statement
    switch ((enum MenuChoice)inputChoice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        default:
            printf("Error: Invalid menu choice selected!\n");
            break;
    }

    return 0;
}