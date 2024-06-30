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

    std::string_view getName() const
    {
        return m_name;
    }

    int getNumLegs() const
    {
        return m_numLegs;
    }

private:

    std::string_view m_name{ "snake" };
    int m_numLegs{ 0 };
};

int main()
{
    constexpr Snake animal;
    std::cout << "a " << animal.getName() << " has " << animal.getNumLegs() << " legs\n";

    return 0;
}
