#include <iostream>

int calculate(int x, int y, char operation)
{
    switch (operation)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case '%':
        return x % y;
    default:
        std::cout << "Invalid operator. Returning 0.\n";
        return 0;
    }
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter a second integer: ";
    int y{};
    std::cin >> y;

    std::cout << "Choose an operator (+, -, *, /, or %): ";
    char operation{};
    std::cin >> operation;

    std::cout << calculate(x, y, operation) << '\n';

    return 0;
}
