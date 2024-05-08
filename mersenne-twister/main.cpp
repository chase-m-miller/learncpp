#include <iostream>
#include <random> // for std::mt19937

int main()
{
    std::mt19937 mt{}; // instantiate a 32-bit mersenne twister

    // print random numbers
    for (int i{ 0 }; i <= 50; ++i)
    {
        std::cout << mt() << '\t'; // generate a random number

        // start a new row if we've printed 5 numbers
        if (i % 5 == 0)
        {
            std::cout << '\n';
        }
    }

    return 0;
}
