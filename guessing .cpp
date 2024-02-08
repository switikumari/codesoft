//codesoft intership
//Number guessing game by switi kumari
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;
    int userGuess;

    while (true) {
        // Ask the user to guess the number
        std::cout << "Guess the number between 1 and 100: ";
        std::cin >> userGuess;

        // Provide feedback
        if (userGuess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else if (userGuess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number, " << secretNumber << ".\n";
            break;
        }