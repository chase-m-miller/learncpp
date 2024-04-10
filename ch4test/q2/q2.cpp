#include <iostream>

double getDouble()
{
    std::cout << "Enter a number: ";
    double x {};
    std::cin >> x;

    return x;
}

char getOperator()
{
    std::cout << "Enter +, -, *, or /: ";
    char operation {};
    std::cin >> operation;

    return operation;
}

double performCalculation(double x, double y, char operation)
{
    if (operation == '+')
        return x + y;
    else if (operation == '-')
        return x - y;
    else if (operation == '*')
        return x * y;
    else if (operation == '/')
        return x / y;
}

int main()
{
    double x {getDouble()};
    double y {getDouble()};
    char operation {getOperator()};

    double result {performCalculation(x, y, operation)};
    std::cout << "The result is: " << result << '\n';

    return 0;
}
