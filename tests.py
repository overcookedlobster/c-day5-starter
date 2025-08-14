import unittest
import subprocess
import os

class TestDay5C(unittest.TestCase):

    def run_c_executable(self, executable_name, inputs, expected_substring):
        """Runs a C executable, provides input, and checks output."""
        self.assertTrue(os.path.exists(executable_name), f"Executable '{executable_name}' not found. Did it compile?")
        
        process = subprocess.run(
            [f'./{executable_name}'],
            input='\n'.join(map(str, inputs)),
            capture_output=True,
            text=True,
            timeout=5
        )
        
        self.assertEqual(process.stderr, "", f"Runtime error: {process.stderr}")
        
        output = process.stdout.strip()
        self.assertIn(expected_substring, output, f"Expected '{expected_substring}', got '{output}'")

    # In-Class: Guessing Game Tests
    # These tests rely on the #ifdef TESTING block in the C code,
    # which fixes the secret number to 42.
    def test_guess_too_low(self):
        self.run_c_executable("guessing_game", ["20"], "Too low!")

    def test_guess_too_high(self):
        self.run_c_executable("guessing_game", ["80"], "Too high!")

    def test_guess_correct_first_try(self):
        self.run_c_executable("guessing_game", ["42"], "You got it in 1 guesses!")

    def test_guess_correct_multi_try(self):
        self.run_c_executable("guessing_game", ["10", "90", "42"], "You got it in 3 guesses!")

    # Homework: Unit Converter Tests
    def test_converter_km_to_miles(self):
        self.run_c_executable("unit_converter", ["1", "10", "3"], "Result: 6.21")

    def test_converter_c_to_f(self):
        self.run_c_executable("unit_converter", ["2", "100", "3"], "Result: 212.0")
    
    def test_converter_invalid_choice(self):
        self.run_c_executable("unit_converter", ["5", "3"], "Invalid choice")

    def test_converter_quit(self):
        self.run_c_executable("unit_converter", ["3"], "Goodbye!")


if __name__ == '__main__':
    # We can't run tests if the code hasn't been compiled.
    # The YAML file will handle the compilation step first.
    executables_exist = os.path.exists('guessing_game') and os.path.exists('unit_converter')
    if executables_exist:
        # To test this file locally:
        # 1. Run `make all CFLAGS="-Wall -Wextra -std=c11 -lm -DTESTING=1"` in your terminal
        # 2. Run `python3 tests.py`
        unittest.main(exit=False)
    else:
        print("Executables not found. Please compile with the TESTING flag first.")

