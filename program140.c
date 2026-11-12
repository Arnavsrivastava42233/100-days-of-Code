//Define a struct with enum Gender and print person's gender
#include <stdio.h>
#include <string.h>

// 1. Define the enum for Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// 2. Define the struct that includes the Gender enum
struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    // 3. Create and initialize a Person variable
    struct Person p1;
    strcpy(p1.name, "Alice");
    p1.gender = FEMALE;

    // Print the person's name
    printf("Name: %s\n", p1.name);

    // 4. Print the gender using a switch statement to map the enum value
    printf("Gender: ");
    switch (p1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    return 0;
}