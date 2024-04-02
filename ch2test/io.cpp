#include "io.h"
#include <iostream>

#define ENABLE_DEBUG

int readNumber()
{
#ifdef ENABLE_DEBUG
std::cerr << "readNumber() called" << '\n';
#endif
    std::cout << "Enter a number: ";
    int num{};
    std::cin >> num;
#ifdef ENABLE_DEBUG
std::cerr << "Number input: " << num << '\n';
#endif

    return num;
}

void writeAnswer(int answer)
{
#ifdef ENABLE_DEBUG
std::cerr << "writeAnswer() called" << '\n';
#endif
    std::cout << "The answer is: " << answer << '\n';
}
