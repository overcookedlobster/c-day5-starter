# Makefile for C Assignments

# Compiler and flags
# CFLAGS is a standard variable name for compiler flags.
# -Wall and -Wextra enable all major warnings.
# -std=c11 specifies the C language standard.
# -lm links the math library.
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -lm

# All targets to be built
all: shape_calculator basic_calculator guessing_game unit_converter

# --- Day 4 ---
shape_calculator: shape_calculator.c
	$(CC) $(CFLAGS) -o shape_calculator shape_calculator.c

basic_calculator: basic_calculator.c
	$(CC) $(CFLAGS) -o basic_calculator basic_calculator.c

# --- Day 5 ---
guessing_game: guessing_game.c
	$(CC) $(CFLAGS) -o guessing_game guessing_game.c

unit_converter: unit_converter.c
	$(CC) $(CFLAGS) -o unit_converter unit_converter.c


# Rule to run the python autograding tests
test:
	python3 tests.py

# Rule to clean up all compiled files
clean:
	rm -f shape_calculator basic_calculator guessing_game unit_converter

