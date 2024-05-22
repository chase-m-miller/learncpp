#include "Random.h"
#include <iostream>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool clearFailedExtraction()
{
    if (!std::cin)
    {
        if (std::cin.eof())
        {
            exit(0);
        }

        std::cin.clear();
        ignoreLine();

        return true;
    }

    return false;
}

int getGuess(int numGuesses)
{
    while (true)
    {
        std::cout << "Guess #" << numGuesses << ": ";
        int guess{};
        std::cin >> guess;

        if (clearFailedExtraction())
        {
            std::cout << "Extraction failed. Input an integer 1 through 100.\n";
            continue;
        }
        else if (guess < 1 || guess > 100)
        {
            std::cout << "Please enter an integer between 1 and 100.\n";
            continue;
        }

        ignoreLine();
        return guess;
    }
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
