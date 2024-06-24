#include <iostream>
#include <string>
#include <string_view>

// an ogre, a dragon, an orc, a giant spider, or a slime
enum MonsterType
{
    ogre,
    dragon,
    orc,
    spider,
    slime,
};

struct Monster
{
    std::string_view name { "Unknown" };
    MonsterType enemyType { slime };
    int hp { 100 };
};

std::string_view getMonsterType(Monster monster)
{
    switch(monster.enemyType)
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
    std::cout << "This " << getMonsterType(monster) << " is named " << monster.name << " and has " << monster.hp << " hp.\n";
}

int main()
{
    Monster torg  { "Torg", orc, 145 };   // Torg the Orc with 145 HP
    Monster blurp { "Blurp", slime, 23 }; // Blurp the Slime with 23 HP

    printMonster(torg);
    printMonster(blurp);

    return 0;
}
