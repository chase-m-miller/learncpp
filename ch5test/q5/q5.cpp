#include <iostream>
#include <string>

std::string getName(int num)
{
    std::cout << "Enter the name of person #" << num << ": ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    return name;
}

int getAge()
{
    int age{};
    std::cin >> age;

    return age;
}

void returnOldest(std::string person1, int age1, std::string person2, int age2)
{
    if (age1 > age2)
        std::cout << person1 << " (age " << age1 << ") is older than " << person2 << " (age " << age2 << ").\n";
    else
        std::cout << person2 << " (age " << age2 << ") is older than " << person1 << " (age " << age1 << ").\n";
}

int main()
{
    std::string person1 {getName(1)};
    std::cout << "Enter the age of " << person1 << ": ";
    int age1 {getAge()};

    std::string person2 {getName(2)};
    std::cout << "Enter the age of " << person2 << ": ";
    int age2 {getAge()};

    returnOldest(person1, age1, person2, age2);

    return 0;
}
