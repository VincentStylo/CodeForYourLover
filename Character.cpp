//
//  Character.cpp
//  Project-1
//
//  Created by Martinez Torres, Jose on 3/3/19.
//  Copyright © 2019 Jose Martinez-Torres. All rights reserved.
//

#include "Character.hpp"
#include "Room.hpp"

Character::Character(std::string name, int hp, int damage, int defense)
{
    this->name = name;
    this->hp = hp;
    this->damage = damage;
    this->defense = defense;
}


std::string Character::getName(){
    return this ->name;
}

int Character::getHp(){
    return this -> hp;
}

int Character::getDamage(){
    return this -> damage;
}

int Character::getDefense(){
    return this -> defense;
}


