# Number_Guessing_Game

# Description

The Number Guessing Game is a simple command-line game written in C++. The computer selects a random number between 1 and 100, and the player tries to guess the number. After each guess, the program provides feedback indicating whether the guess was too high, too low, or correct. The game also tracks the number of attempts taken to guess the correct number.

# Features

Random Number Generation: A new random number is generated each time you play.

User Feedback: The program guides the player by indicating if their guess is too high or too low.

Attempts Counter: Keeps track of how many guesses the player has made.

Replay Option: After finishing a game, players can choose to play again or exit.

# How to Run

# Prerequisites

A C++ compiler (e.g., g++ from GCC).

Basic knowledge of using a terminal or command prompt.

# Compilation

Use the following command to compile the program:

g++ -o number_guessing_game number_guessing_game.cpp

# Execution

Run the compiled program with:

./number_guessing_game

# How to Play

When the program starts, it will select a random number between 1 and 100.

You will be prompted to guess the number.

After entering a guess, the program will tell you if your guess is:

Too high

Too low

Correct

Continue guessing until you find the correct number.

Once you guess correctly, the program will display the number of attempts it took.

You will then be asked if you'd like to play again. Enter y to play another round or n to exit.

# Example Gameplay

Welcome to the Number Guessing Game!
I have chosen a number between 1 and 100. Can you guess it?

Enter your guess: 50
Too high! Try again.
Enter your guess: 25
Too low! Try again.
Enter your guess: 37
Congratulations! You guessed the correct number in 3 attempts.

Do you want to play again? (y/n): n
Thank you for playing! Goodbye!

# Notes

The random number generation is seeded using the current time, ensuring a different number is chosen for each game session.

Input validation is basic. Ensure you enter valid integers when prompted.

# Contribution

Feel free to contribute to this project by:

Adding features (e.g., difficulty levels or a scoring system).

Improving input validation.

Enhancing the user interface.
