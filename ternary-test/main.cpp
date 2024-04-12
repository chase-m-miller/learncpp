#include <iostream>

int main()
{
    std::cout << "Enter the number one: ";
    int x {};
    std::cin >> x;
    std::cout << ((x == 1) ? "Correct!" : "I'm not angry, just disappointed.") << '\n';

    return 0;
}
