//
//  Item.hpp
//  Project-1
//
//  Created by Joey Martinez-Torres on 3/4/19.
//  Copyright © 2019 Jose Martinez-Torres. All rights reserved.
//

#include "Room.hpp"
#include <stdio.h>

class Item
{
public:
    Item(std::string name, int attack, int defense, int heal);
    std::string getName();
    int getAttack();
    int getDefense();
    int getHeal();
    void printItem();
    
private:
    std::string name;
    int attack;
    int defense;
    int heal;
};

