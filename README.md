# Day 5 C: Loops, Arrays & Guessing Game

On Day 5, we'll explore some of the most fundamental building blocks of programming in C: loops and arrays. These allow you to repeat actions and store collections of data.

## New C Concepts

-   **Loops**:
    -   `for` loop: Used to repeat a block of code a specific number of times. The syntax is `for (initialization; condition; increment) { ... }`.
    -   `while` loop: Used to repeat a block of code as long as a condition is true. The syntax is `while (condition) { ... }`.
-   **Arrays**:
    -   A fixed-size collection of elements of the same type. You declare them like this: `int my_numbers[10];` to create an array that can hold 10 integers.
-   **Random Numbers**:
    -   Generating random numbers in C requires two steps and functions from `<stdlib.h>` and `<time.h>`:
    1.  **Seed the generator**: `srand(time(NULL));` This should be done **only once** at the beginning of your `main` function. It uses the current time to make sure your random numbers are different each time you run the program.
    2.  **Get a random number**: `rand() % 100 + 1;` This generates a random number between 1 and 100.

## Sub-Task 1: C Guessing Game
-   **File to edit:** `guessing_game.c`
-   **Goal:** Write a C program where the computer picks a secret number and the user has to guess it. The program will use a `while` loop to keep the game going until the user guesses correctly.
-   **To Compile & Run**:
    1.  `make guessing_game`
    2.  `./guessing_game`

## Homework: C Unit Converter
-   **File to edit:** `unit_converter.c`
-   **Goal:** Create a menu-driven unit converter that runs in a loop until the user chooses to quit. This is a great way to practice `while` loops and the `switch` or `if/else if` statements.
-   **To Compile & Run**:
    1.  `make unit_converter`
    2.  `./unit_converter`

## Instructions
1.  Carefully read the new concepts, especially how to generate random numbers.
2.  Edit the `.c` files to complete the `// TODO:` sections.
3.  Use `make` to compile your code and test it yourself before submitting.
4.  Push your code to GitHub to run the automated tests.
