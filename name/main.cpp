#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your name: ";
    std::string name {};
    std::getline(std::cin, name);

    std::cout << "Your name is: " << name << ", which is " << name.length() << " characters long.\n";

    return 0;
}
