#include <iostream>

int main() {
    int x{};
    std::cout << "Value of x prior to input: " << x << '\n';
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "You entered: " << x << '\n';
    return 0;
}
