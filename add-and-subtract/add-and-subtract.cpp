#include <iostream>

int main()
{
    std::cout << "Enter two numbers: ";

    int x {};
    int y {};
    std::cin >> x >> y;

    std::cout << x << " + " << y << " is " << x + y << ".\n";
    std::cout << x << " - " << y << " is " << x - y << ".\n";

    return 0;
}
