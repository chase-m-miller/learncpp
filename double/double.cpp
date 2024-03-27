#include <iostream>

int main()
{
    std::cout << "Enter a number to be doubled: ";

    int num{};
    std::cin >> num;

    std::cout << num << " doubled is " << num * 2 << ".\n";

    return 0;
}
