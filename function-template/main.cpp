#include <iostream>

template <typename T>
T max(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    std::cout << max<int>(3, 2) << '\n';
    std::cout << max<char>('a', 'b') << '\n';
    std::cout << max<double>(6.9, 4.1) << '\n';

    return 0;
}
