// Day 5 C HW: Unit Converter
#include <stdio.h>

int main() {
    int choice;

    // TODO: Create a while(1) loop to make the menu run continuously.
    // Inside the loop:
    // 1. Print the menu options:
    //    "Unit Converter Menu:\n"
    //    "1. Kilometers to Miles\n"
    //    "2. Celsius to Fahrenheit\n"
    //    "3. Quit\n"
    //    "Enter your choice: "
    // 2. Read the user's integer choice using scanf.
    // 3. Use a switch statement or if/else if block to handle the choice.
    //    - Case 1: Prompt for kilometers, calculate miles (km * 0.621371), print result.
    //    - Case 2: Prompt for Celsius, calculate Fahrenheit ((C * 9.0/5.0) + 32), print result.
    //      (Note: use 9.0/5.0 for floating-point division).
    //    - Case 3: Print "Goodbye!\n" and `break` the while loop to exit.
    //    - Default: Print "Invalid choice, please try again.\n"

    // Example loop and menu structure
    while (1) {
        printf("\nUnit Converter Menu:\n");
        printf("1. Kilometers to Miles\n");
        printf("2. Celsius to Fahrenheit\n");
        printf("3. Quit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        // Your switch or if/else if logic here...

        printf("Goodbye!\n"); // Placeholder
        break; // Placeholder
    }

    return 0;
}

