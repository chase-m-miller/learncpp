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
        std::cout << "Invalid operator.\n";
        return;
    }
}
