#include <iostream>

int main()
{
    int x { 2 };
    int& ref { x };

    std::cout << x << ref << '\n';

    ++ref;
    std::cout << x << ref << '\n';

    return 0;
}
