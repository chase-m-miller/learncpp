#include <iostream>

int main()
{
    int smaller {};
    int larger {};

    std::cout << "Enter the first number: ";
    std::cin >> smaller;

    std::cout << "Enter the second number: ";
    std::cin >> larger;

    if (smaller > larger)
    {
        int swap {smaller};
        smaller = larger;
        larger = swap;
    } // swap goes out of scope here

    std::cout << "The smaller number is " << smaller << '\n';
    std::cout << "The larger number is " << larger << '\n';

    return 0;
} // smaller and larger go out of scope here
