#include <iostream>

int sumTo(int x)
{
    int total{};
    for (int i{ 1 }; i <= x; ++i)
    {
        total += i;
    }
    return total;
}

int main()
{
    std::cout << sumTo(5) << '\n';

    return 0;
}
