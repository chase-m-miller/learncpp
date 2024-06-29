#include <iostream>
#include <string_view>

class Cat
{
    std::string_view name{ "cat" };
    int numLegs{ 4 };
};

class Dog
{
    std::string_view name{ "dog" };
    int numLegs{ 4 };
};

class Chicken
{
    std::string_view name{ "chicken" };
    int numLegs{ 2 };
};

class Snake
{
public:

    void printName()
    {
        std::cout << m_name;
    }

    void printNumLegs()
    {
        std::cout << m_numLegs;
    }

private:

    std::string_view m_name{ "snake" };
    int m_numLegs{ 0 };
};

int main()
{
    constexpr Snake animal;
    std::cout << "a " << animal.printName() << " has " << animal.printNumLegs() << " legs\n";

    return 0;
}
