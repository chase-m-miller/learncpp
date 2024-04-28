#include <iostream>

int main()
{
    std::cout << "Enter the first number: ";
    int smaller {};
    std::cin >> smaller;

    std::cout << "Enter the second number: ";
    int larger {};
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
