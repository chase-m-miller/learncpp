#include <iostream>

int main()
{
    int outer{ 1 };
    while (outer <= 5)
    {
        int inner{ 5 };
        while (inner >= outer)
        {
            std::cout << inner << ' ';
            --inner;
        }
        std::cout << '\n';
        ++outer;
    }
}
