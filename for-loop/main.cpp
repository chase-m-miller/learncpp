#include <iostream>
#include <string>

int main()
{
    std::string alphabet;

    for (char letter {'a'}; letter <= 'z'; ++letter)
        alphabet += letter;

    std::cout << alphabet;

    return 0;
}
