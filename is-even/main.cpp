#include <iostream>
#include <string>
#include <string_view>

constexpr std::string isEven(int x)
{
    if (x % 2 == 0)
        return std::to_string(x) + " is even.";
    else
        return std::to_string(x) + " is odd.";
}

int main()
{
    std::cout << isEven(42) << '\n';
    std::cout << isEven(13) << '\n';

    return 0;
}
