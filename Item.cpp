//
//  Item.cpp
//  Project-1
//
//  Created by Joey Martinez-Torres on 3/4/19.
//  Copyright © 2019 Jose Martinez-Torres. All rights reserved.
//

#include "Item.hpp"
#include "Room.hpp"

Item::Item(std::string name, int attack, int defense, int heal)
{
    this->name = name;
    this->attack = attack;
    this->defense = defense;
    this->heal = heal;
}

std::string Item::getName()
{
    return this->name;
}

int Item::getAttack()
{
   return this->attack;
}

int Item::getDefense()
{
    return this->defense;
}

int Item::getHeal()
{
    return this->heal;
}

void Item::printItem() {
    std::cout << this->getName() << "\t Attack: " << this->getAttack() << "\t Defense: " << this->getDefense() << "\t Heal:" << this->getHeal();
}
