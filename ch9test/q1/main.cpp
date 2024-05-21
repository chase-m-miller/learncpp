#include "Random.h"
#include <iostream>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int getGuess(int numGuesses)
{
    std::cout << "Guess #" << numGuesses << ": ";
    int guess{};
    std::cin >> guess;

    return guess;
}

bool guessingGame(int answer, int guesses)
{
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";

    for (; guesses > 0; --guesses)
    {
        int userGuess{ getGuess(guesses) };

        if (userGuess > answer)
        {
            std::cout << "Your guess is too high.\n";
        }
        else if (userGuess < answer)
        {
            std::cout << "Your guess is too low.\n";
        }
        else
        {
            std::cout << "Correct! You win!\n";
            return true; // player won the game
        }
    }

    std::cout << "Sorry, you lose. The correct number was " << answer << ".\n";
    return false; // player lost the game
}

bool playAgain()
{
    std::cout << "Would you like to play again (y/n)? ";
    
    char playAgain{};
    while (true)
    {
        std::cin >> playAgain;

        switch (playAgain)
        {
        case 'y':
            return true;
        case 'n':
            return false;
        }
    }
}

int main()
{
    constexpr int guesses{ 7 };

    do
    {
        int answer{ Random::get(1, 100) };
        guessingGame(answer, guesses);
    } while (playAgain());
    
    return 0;
}
