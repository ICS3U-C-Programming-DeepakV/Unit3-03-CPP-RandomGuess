// Copyright (c) 2026 Deepak V rights reserved
// Created by: Deepak V
// Date: Oct. 15, 2026
// This program is about guessing numbers.
#include <iostream>
#include <random>

int main() {
    // Generate a random number between 0 and 9
    int someRandomNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);

    someRandomNumber = idist(rgen);

    // Necessary variable
    int guessedNumber;

    // This will be displayed when the code runs
    std::cout << "Guess a random number in the range from 0-9: ";
    std::cin >> guessedNumber;

    // If the guess is correct, this will be displayed
    if (guessedNumber == someRandomNumber) {
        std::cout << "Good job, you got it correct!\n";
    }

    // If the guess is incorrect, this will be displayed
    if (guessedNumber != someRandomNumber) {
        std::cout
            << "The guess is incorrect, try again. The correct number was: "
            << someRandomNumber << "\n";
    }
}
