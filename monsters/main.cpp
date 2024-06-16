#include <iostream>

namespace Monster
{
    enum MonsterType
    {
        orc,
        goblin,
        troll,
        ogre,
        skeleton,
    };
}

int main()
{
    Monster::MonsterType monster { Monster::troll };

    std::cout << "Monster is troll? " << ((monster == Monster::troll) ? "Yes" : "No") << '\n';

    return 0;
}
