#include <iostream>

int main()
{
    std::cout << "Enter a character: ";
    char input {};
    std::cin >> input;

    std::cout << "Character '" << input << "' has an integer value of '" << static_cast<int>(input) << "'.\n";

    return 0;
}
