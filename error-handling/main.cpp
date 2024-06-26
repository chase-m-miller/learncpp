#include <iostream>

double reciprocal(double x)
{
    // can't divide by 0, return 0.0 for caller to catch as an error
    if (x == 0.0)
        return 0.0; // 0.0 will never be a valid result, use as error code

    return 1.0 / x;
}

int main()
{
    while (true)
    {
        std::cout << "What number would you like the reciprocal of? ";
        double x{};
        std::cin >> x;
    
        double reciprocalOfX{ reciprocal(x) };
        
        if (reciprocalOfX == 0.0)
        {
            std::cout << "Cannot take the reciprocal of 0.\n";
            continue;
        }

        std::cout << "The reciprocal of " << x << " is " << reciprocalOfX << ".\n";
        break;
    }

    return 0;
}
