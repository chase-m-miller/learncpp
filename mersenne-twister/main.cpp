#include <iostream>
#include <random> // for std::mt19937

int main()
{
    std::mt19937 mt{}; // instantiate a 32-bit mersenne twister

    // create a RNG that generates uniform numbers between 1 and 6
    std::uniform_int_distribution die6{ 1, 6 };

    // print random numbers
    for (int i{ 0 }; i <= 50; ++i)
    {
        std::cout << die6(mt) << '\t'; // generate a dice roll

        // start a new row if we've printed 5 numbers
        if (i % 10 == 0)
        {
            std::cout << '\n';
        }
    }

    return 0;
}
