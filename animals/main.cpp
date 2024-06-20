#include <iostream>
#include <string>
#include <string_view>

enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};

std::string_view getAnimalName(Animal animal)
{
    using enum Animal;
    
    switch(animal)
    {
    case pig:     return "pig";
    case chicken: return "chicken";
    case goat:    return "goat";
    case cat:     return "cat";
    case dog:     return "dog";
    case duck:    return "duck";
    default:      return "No match found.";
    }
}

std::string_view getNumberOfLegs(Animal animal)
{
    using enum Animal;

    switch(animal)
    {
    case chicken:
    case duck:
        return "2 legs";
    case pig:
    case goat:
    case cat:
    case dog:
        return "4 legs";
    default:
        return "No match found.";
    }
}

int main()
{
    Animal cat { Animal::cat };
    Animal chicken { Animal::chicken };

    std::cout << "A " << getAnimalName(cat) << " has " << getNumberOfLegs(cat) << ".\n";
    std::cout << "A " << getAnimalName(chicken) << " has " << getNumberOfLegs(chicken) << ".\n";

    return 0;
}
