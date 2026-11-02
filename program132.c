//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>

// Define the enum for traffic lights
typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLight;

// Function to print the action based on the traffic light value
void printTrafficAction(TrafficLight light) {
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid signal\n");
    }
}

int main() {
    // Test the enum values
    TrafficLight currentLight = RED;
    
    printf("RED light: ");
    printTrafficAction(RED);
    
    printf("YELLOW light: ");
    printTrafficAction(YELLOW);
    
    printf("GREEN light: ");
    printTrafficAction(GREEN);

    return 0;
}