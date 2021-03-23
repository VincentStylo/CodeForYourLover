//
//  Character.hpp
//  Project-1
//
//  Created by Martinez Torres, Jose on 3/3/19.
//  Copyright © 2019 Jose Martinez-Torres. All rights reserved.
//

#include "Room.hpp"
#include "Item.hpp"

class Character
{
public:
    Character(std::string name, int hp, int damage, int defense);
    std::string getName();
    int getHp();
    int getDamage();
    int getDefense();
    void addItem(Item);
    Item* getinv();
private:
    std::string name;
    int hp;
    int hpMax;
    int defense;
    int damage;
    std::vector<Item*> inv;
    Item* cinv;     
};


