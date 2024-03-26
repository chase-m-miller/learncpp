#include <iostream>

int main()
{
    int x{};
    std::cout << "Enter a number to be doubled: ";
    std::cin >> x;
    std::cout << x << " doubled is " << x * 2 << ".\n";

    return 0;
}
