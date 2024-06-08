#include <iostream>

// in parameter
int returnInt(int x)
{
    return x;
}

// out parameter
void incrementInt(int& x)
{
    x++;
}

int main()
{
    int x { 5 };

    std::cout << returnInt(x) << '\n';

    incrementInt(x);
    std::cout << x << '\n';

    return 0;
}
