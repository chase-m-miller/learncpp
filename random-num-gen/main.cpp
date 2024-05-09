#include <iostream>
#include <random>

int main()
{
    std::random_device rd{};
    // get 8 random integers from std::random_device for our seed
    std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() };
    // initialize the mersenne twister with the std::seed_seq
    std::mt19937 mt{ ss };

    // create a reuseable RNG that generates uniform numbers between 1 and 6
    std::uniform_int_distribution die6{ 1, 6 };

    for (int i{ 1 }; i <= 40; ++i)
    {
        std::cout << die6(mt) << '\t'; // roll the dice

        if (i % 10 == 0)
            std::cout << '\n';
    }

    return 0;
}
