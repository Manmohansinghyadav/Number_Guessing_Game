#include <iostream>
#include <cstdlib>
#include <ctime>

void playGame() {
    std::srand(std::time(0));
    int randomNumber = std::rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I have chosen a number between 1 and 100. Can you guess it?\n";

    while (guess != randomNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < randomNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number in "
                      << attempts << " attempts.\n";
        }
    }
}

int main() {
    char playAgain;
    do {
        playGame();

        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thank you for playing! Goodbye!\n";
    return 0;
}
