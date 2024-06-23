#include <iostream>

struct Fraction
{
    int numerator { 0 };
    int denominator { 1 };
};

Fraction getFraction()
{
    Fraction fraction {};
    
    std::cout << "Enter the numerator: ";
    std::cin >> fraction.numerator;

    std::cout << "Enter the denominator: ";
    std::cin >> fraction.denominator;

    return fraction;
}

constexpr Fraction multiplyFractions(const Fraction& fraction1, const Fraction& fraction2)
{
    return { fraction1.numerator * fraction2.numerator, fraction1.denominator * fraction2.denominator };
}

void printFraction(const Fraction& fraction)
{
    std::cout << fraction.numerator << '/' << fraction.denominator;
}

int main()
{
    Fraction fraction1 { getFraction() };
    Fraction fraction2 { getFraction() };

    std::cout << "Your fractions multiplied together: ";
    printFraction(multiplyFractions(fraction1, fraction2));

    return 0;
}
