#include <iostream>

void isNullPtr(int* ptr)
{
    std::cout << (ptr ? "Pointer is not null.\n" : "Pointer is null.\n");
}

int main()
{
    int x { 10 };
    int* ptr { &x };

    std::cout << x << '\n';

    *ptr = 20;
    std::cout << x << '\n';

    isNullPtr(ptr);

    ptr = nullptr;
    isNullPtr(ptr);

    return 0;
}
