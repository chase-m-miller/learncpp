#include <iostream>

template <typename T, typename U>
auto max(T x, U y)
{
    return (x > y) ? x : y;
}

int main()
{
    std::cout << max<int>(3, 2) << '\n';
    std::cout << max<char>('a', 'b') << '\n';
    std::cout << max<double>(6.9, 4.1) << '\n';
    std::cout << max(4.9, 4) << '\n';

    return 0;
}
