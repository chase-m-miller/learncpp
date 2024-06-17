#include <iostream>

enum Color
{
    black,
    red,
    blue,
    green,
};

std::string_view getColor(Color color)
{
    switch(color)
    {
    case black: return "black";
    case red:   return "red";
    case blue:  return "blue";
    case green: return "green";
    default:    return "Color not found.";
    }
}

int main()
{
    Color shirt { red };
    
    std::cout << "The color of your shirt is " << getColor(shirt) << ".\n";

    return 0;
}
