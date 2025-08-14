// Day 5 C: Loops, Arrays & Guessing Game
#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required for time()

int main() {
    int secret_number;
    int player_guess;
    int guess_count = 0;

    // This block sets the secret number.
    // For testing, it's a fixed value (42).
    // For normal runs, it's a random number.
    #ifdef TESTING
        secret_number = 42;
    #else
        // TODO: Seed the random number generator using the current time.
        // This should only be done ONCE.

        // TODO: Generate a random number between 1 and 100.
        secret_number = 0; // Placeholder
    #endif

    printf("I have selected a secret number between 1 and 100.\n");

    // TODO: Create a while loop that runs forever (or until the player guesses correctly).
    // Inside the loop:
    // 1. Prompt the player to enter their guess.
    // 2. Read their guess into the `player_guess` variable using scanf.
    // 3. Increment the guess_count.
    // 4. Use if/else if/else to compare the guess to the secret number.
    //    - If the guess is too low, print "Too low!\n".
    //    - If the guess is too high, print "Too high!\n".
    //    - If the guess is correct, print "You got it in X guesses!\n" (where X is guess_count)
    //      and then `break` out of the loop.
    
    // Example of a loop structure
    while (1) {
        printf("Enter your guess: ");
        // Your logic here...
        printf("You got it in 1 guesses!\n"); // Placeholder
        break; // Placeholder
    }

    return 0;
}

