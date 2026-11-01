//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;

int main() {
    FILE *file;
    int i;

    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    Student studentsToWrite[] = {
        {"Alice Smith", 101, 88.5},
        {"Bob Jones", 102, 92.0},
        {"Charlie Brown", 103, 79.5}
    };
    int numStudents = 3;

    for (i = 0; i < numStudents; i++) {
        fprintf(file, "%s,%d,%.2f\n", studentsToWrite[i].name, 
                                     studentsToWrite[i].roll_no, 
                                     studentsToWrite[i].marks);
    }

    fclose(file);
    printf("Successfully wrote %d records to 'students.txt'.\n\n", numStudents);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("--- Reading Student Records from File ---\n");
    printf("%-20s %-10s %-10s\n", "Name", "Roll No", "Marks");
    printf("----------------------------------------\n");

    Student tempStudent;
    
    while (fscanf(file, "%[^,],%d,%f\n", tempStudent.name, 
                                         &tempStudent.roll_no, 
                                         &tempStudent.marks) == 3) {
        printf("%-20s %-10d %-10.2f\n", tempStudent.name, 
                                       tempStudent.roll_no, 
                                       tempStudent.marks);
    }

    fclose(file);

    return 0;
}