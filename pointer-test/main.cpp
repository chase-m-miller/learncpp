#include <iostream>

int main()
{
    int x { 10 };
    int* ptr { &x };

    std::cout << x << '\n';

    *ptr = 20;
    std::cout << x << '\n';

    return 0;
}
