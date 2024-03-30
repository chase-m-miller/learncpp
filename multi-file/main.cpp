#include "add.h"
#include <iostream>

int main()
{
    std::cout << "Enter two numbers to add: ";

    int x{};
    int y{};
    std::cin >> x >> y;

    std::cout << "The result is: " << add(x, y) << '\n';

    return 0;
}
