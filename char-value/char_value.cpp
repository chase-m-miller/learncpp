#include <iostream>

int main()
{
    std::cout << "Enter a character: ";
    char input {};
    std::cin >> input;

    int implicit_conversion_input {input};
    std::cout << "Character '" << input << "' has an integer value of '" << implicit_conversion_input << "'.\n";

    return 0;
}
