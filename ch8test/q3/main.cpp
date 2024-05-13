#include "Random.h"
#include <iostream>

void guessingGame()
{
    int answer{ Random::get(1, 100) };
    bool isWinner = false;

    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";

    for (int guesses{ 7 }; guesses > 0; --guesses)
    {
        std::cout << "Guess #" << guesses << ": ";
        int userGuess{};
        std::cin >> userGuess;

        if (userGuess == answer)
        {
            isWinner = true;
            break;
        }
        else if (userGuess < answer)
        {
            std::cout << "Your guess is too low.\n";
        }
        else
        {
            std::cout << "Your guess is too high.\n";
        }
    }

    if (isWinner)
    {
        std::cout << "Correct! You win!\n";
    }
    else
    {
        std::cout << "Sorry, you lose. The correct number was " << answer << ".\n";
    }

    std::cout << "Would you like to play again (y/n)? ";
    
    char playAgain{};
    while (playAgain != 'y' && playAgain != 'n')
    {
        std::cin >> playAgain;
    }

    if (playAgain == 'y')
    {
        guessingGame();
    }

    return;
}

int main()
{
    guessingGame();

    return 0;
}
