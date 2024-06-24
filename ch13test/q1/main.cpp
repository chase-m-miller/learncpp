#include <iostream>
#include <string>
#include <string_view>

// an ogre, a dragon, an orc, a giant spider, or a slime

struct Monster
{
    enum Type
    {
        ogre,
        dragon,
        orc,
        spider,
        slime,
    };

    std::string_view name { "Unknown" };
    Type type { slime };
    int hp { 100 };
};

std::string_view getMonsterTypeSV(Monster monster)
{
    using enum Monster::Type;
    
    switch(monster.type)
    {
        case ogre:   return "Ogre";
        case dragon: return "Dragon";
        case orc:    return "Orc";
        case spider: return "Spider";
        case slime:  return "Slime";
        default:     return "Error: monster type not found";
    }
}

void printMonster(Monster monster)
{
    std::cout << "This " << getMonsterTypeSV(monster) << " is named " << monster.name << " and has " << monster.hp << " hp.\n";
}

int main()
{
    using enum Monster::Type;
    
    Monster torg  { "Torg", orc, 145 };   // Torg the Orc with 145 HP
    Monster blurp { "Blurp", slime, 23 }; // Blurp the Slime with 23 HP

    printMonster(torg);
    printMonster(blurp);

    return 0;
}
