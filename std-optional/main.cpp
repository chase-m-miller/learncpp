#include <iostream>
#include <optional>

std::optional<int> intDivision(int x, int y)
{
    if (y == 0)
        return {};
    
    return x / y;
}

int main()
{
    std::optional<int> result1 { intDivision(6, 3) };
    std::optional<int> result2 { intDivision(9, 0) };

    if (result1)
        std::cout << "Result 1 is: " << *result1 << '\n';
    else
        std::cout << "Result 1 error: cannot divide by 0.\n";

    if (result2)
        std::cout << "Result 2 is: " << *result2 << '\n';
    else
        std::cout << "Result 2 error: cannot divide by 0.\n";

    return 0;
}
