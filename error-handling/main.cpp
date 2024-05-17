#include <iostream>

double reciprocal(double x)
{
    // can't divide by 0, return 0.0 for caller to catch as an error
    if (x == 0.0)
        return 0.0;

    return 1.0 / x;
}

int main()
{
    std::cout << "What number would you like the reciprocal of? ";
    int x{};
    std::cin >> x;
    
    double reciprocalOfX{ reciprocal(static_cast<double>(x)) };
    if (reciprocalOfX == 0.0)
    {
        std::cout << "Cannot take the reciprocal of 0.\n";
    }
    else
    {
        std::cout << "The reciprocal of " << x << " is " << reciprocalOfX << ".\n";
    }

    return 0;
}
