#include <iostream>

double getDouble()
{
    std::cout << "Enter a number: ";
    double x {};
    std::cin >> x;

    return x;
}

double performOperation(double x, double y)
{
    std::cout << "Enter +, -, *, or /: ";
    char operation {};
    std::cin >> operation;

    if (operation == '+')
        return x + y;
    else if (operation == '-')
        return x - y;
    else if (operation == '*')
        return x * y;
    else if (operation == '/')
        return x / y;
    else
        return 1;
}

int main()
{
    double x {getDouble()};
    double y {getDouble()};

    double result {performOperation(x, y)};
    std::cout << "The result is: " << result << '\n';

    return 0;
}
