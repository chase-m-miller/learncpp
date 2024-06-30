// Write a class named Point3d. The class should contain:

// Three private member variables of type int named m_x, m_y, and m_z;
// A public member function named setValues() that allows you to set values for m_x, m_y, and m_z.
// A public member function named print() that prints the Point in the following format: <m_x, m_y, m_z>

#include <iostream>

class Point3d
{
private:

    int m_x;
    int m_y;
    int m_z;

public:

    void setValues()
    {
        std::cout << "Enter a value for x: ";
        std::cin >> m_x;

        std::cout << "Enter a value for y: ";
        std::cin >> m_y;

        std::cout << "Enter a value for z: ";
        std::cin >> m_z;
    }

    void print()
    {
        std::cout << '<' << m_x << ", " << m_y << ", " << m_z << ">\n";
    }
};

int main()
{
    Point3d coordinates;
    coordinates.setValues();

    coordinates.print();

    return 0;
}
