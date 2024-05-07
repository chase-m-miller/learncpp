#include <iostream>

int main()
{
    int outer{ 1 };
    while (outer <= 5)
    {
        int inner{ 5 };
        while (inner >= 1)
        {
            if (inner > outer)
            {
                std::cout << ' ' << ' ';
            }
            else if (inner <= outer)
            {
                std::cout << inner << ' ';
            }
            --inner;
        }
        std::cout << '\n';
        ++outer;
    }
}
