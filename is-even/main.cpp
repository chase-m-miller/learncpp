#include <iostream>

constexpr bool isEven(int x)
{
    return (x % 2) == 0;
}

int main()
{
    std::cout << std::boolalpha;
    std::cout << isEven(42) << '\n';
    std::cout << isEven(13) << '\n';

    return 0;
}
