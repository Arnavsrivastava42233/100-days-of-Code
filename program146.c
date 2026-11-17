//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

// Define the nested Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define the Employee structure containing the Date structure
struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joiningDate; // Nested structure member
};

int main() {
    // Initialize an Employee variable with nested date values
    struct Employee emp = {
        101,
        "Alice Smith",
        75000.50,
        { 15, 8, 2023 } // Initializing nested structure
    };

    // Print the employee details
    printf("--- Employee Details ---\n");
    printf("ID          : %d\n", emp.id);
    printf("Name        : %s\n", emp.name);
    printf("Salary      : $%.2f\n", emp.salary);
    printf("Joining Date: %02d/%02d/%d\n", 
           emp.joiningDate.day, 
           emp.joiningDate.month, 
           emp.joiningDate.year);

    return 0;
}