#include <iostream>
#include <string>
#include <string_view>
#include <optional>

enum class Color
{
    black,
    red,
    blue,
    green,
};

std::string_view getColor(Color color)
{
    using enum Color;

    switch(color)
    {
    case black: return "black";
    case red:   return "red";
    case blue:  return "blue";
    case green: return "green";
    default:    return "Color not found.";
    }
}

std::optional<Color> getColorFromString(std::string_view sv)
{
    using enum Color;

    if (sv == "black") return black;
    if (sv == "red")   return red;
    if (sv == "blue")  return blue;
    if (sv == "green") return green;

    return {};
}

std::ostream& operator<<(std::ostream& out, Color color)
{
    out << getColor(color);
    return out;
}

std::istream& operator>>(std::istream& in, Color& color)
{
    // Get a string from the user
    std::string s {};
    in >> s;

    // See if string matches an enum, if it does we assign
    // the enum to color and return the input stream
    std::optional<Color> match { getColorFromString(s) };
    if (match)
    {
        color = *match;
        return in;
    }

    // Set input stream state to failed due to no match
    in.setstate(std::ios_base::failbit);

    return in;
}

int main()
{
    Color shirt { Color::red };
    std::cout << "The color of your shirt is " << shirt << ".\n";

    std::cout << "Enter black, red, blue, or green: ";
    std::cin >> shirt;

    if (std::cin)
        std::cout << "You chose: " << shirt << '\n';
    else
    {
        std::cin.clear(); // reset the input stream to good
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Your input was not valid\n";
    }

    return 0;
}
