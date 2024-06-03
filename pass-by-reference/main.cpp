#include <iostream>
#include <string>

void print(std::string& str)
{
    std::cout << str << '\n';
}

int main()
{
    std::string x { "Hello, world." };
    print(x);

    return 0;
}
