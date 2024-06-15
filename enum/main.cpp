#include <bitset>
#include <iostream>

namespace Flags
{
    enum Emotions
    {
        isHappy,
        isAngry,
        isSad,
        isIrritable,
        isNauseous,
        isDepressed,
        isManic,
        isSober,
    };
}

int main()
{
    std::bitset<8> player{};
    player.set(Flags::isHappy);
    player.set(Flags::isSober);

    std::cout << std::boolalpha;

    std::cout << "Is the player happy? " << player.test(Flags::isHappy) << '\n';
    std::cout << "Is the player sober? " << player.test(Flags::isSober) << '\n';
    std::cout << "Is the player depressed? " << player.test(Flags::isDepressed) << '\n';

    return 0;
}
