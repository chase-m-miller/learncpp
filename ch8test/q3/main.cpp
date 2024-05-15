#include "Random.h"
#include <iostream>

bool guessingGame()
{
    int answer{ Random::get(1, 100) };

    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";

    for (int guesses{ 7 }; guesses > 0; --guesses)
    {
        std::cout << "Guess #" << guesses << ": ";
        int userGuess{};
        std::cin >> userGuess;

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
    do
    {
        guessingGame();
    } while (playAgain());
    
    return 0;
}
