//Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    // Read student data from the user
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    // Clear the input buffer to handle the leftover newline from scanf
    while (getchar() != '\n');

    printf("Enter full name: ");
    fgets(s.name, sizeof(s.name), stdin);
    
    // Remove the trailing newline character added by fgets, if present
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Print the student data
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.roll_no);
    printf("Name:        %s\n", s.name);
    printf("Marks:       %.2f\n", s.marks);

    return 0;
}