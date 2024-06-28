#include <iostream>

// Provide the definition for IntPair and the print() member function here
struct IntPair
{
    int x {};
    int y {};

    void print()
    {
        std::cout << "Pair(" << x << ", " << y << ")\n";
    }

    bool isEqual(const IntPair& intPair)
    {
        return (x == intPair.x) && (y == intPair.y);
    }

    void incrementXBy(const int addValue)
    {
        x += addValue;
    }
};

int main()
{
	IntPair p1 {1, 2};
	IntPair p2 {3, 4};

	std::cout << "p1: ";
	p1.print();

	std::cout << "p2: ";
	p2.print();

    std::cout << "p1 and p1 " << (p1.isEqual(p1) ? "are equal\n" : "are not equal\n");
	std::cout << "p1 and p2 " << (p1.isEqual(p2) ? "are equal\n" : "are not equal\n");

    p1.print();
    p1.incrementXBy(5);
    p1.print();

	return 0;
}
