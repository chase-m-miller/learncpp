#include <iostream>

int doubleNumber(int num)
{
    return num * 2;
}

int getNumber()
{
    std::cout << "Enter a number: ";

    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    std::cout << doubleNumber(getNumber()) << '\n';

    return 0;
}
