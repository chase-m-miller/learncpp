#include <iostream>

constexpr int factorial(int x)
{
    if (x == 1)
        return 1;
    else
        return x * factorial(x - 1);
}

int main()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    std::cout << factorial(x) << '\n';

    return 0;
}
