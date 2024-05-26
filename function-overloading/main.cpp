#include <iostream>

int add(int x, int y)
{
    return x + y;
}

double add(double x, double y)
{
    return x + y;
}

int main()
{
    std::cout << add(1, 2) << '\n';
    std::cout << add(2.2, 3.3) << '\n';

    return 0;
}
