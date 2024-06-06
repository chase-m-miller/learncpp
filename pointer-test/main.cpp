#include <iostream>

void isNullPtr(const int* ptr)
{
    std::cout << (ptr ? "Pointer is not null.\n" : "Pointer is null.\n");
}

void print(const int& num)
{
    std::cout << num << '\n';
}

int main()
{
    int x { 10 };
    int* ptr { &x };
    int& ref { x };

    std::cout << x << '\n';

    *ptr = 20;
    std::cout << x << '\n';

    isNullPtr(ptr);

    ptr = nullptr;
    isNullPtr(ptr);

    print(ref);

    return 0;
}
