//
//  Game.hpp
//  Project-1
//
//  Created by Martinez Torres, Jose on 3/3/19.
//  Copyright © 2019 Jose Martinez-Torres. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "Room.hpp"

class Game
{
public:
    Game();
    
    
    //functions
    void storyline();
    void loadItems();
    void loadChars();
    
    //accesssors
    inline bool getPlaying () const
    {
        return this -> playing;
    }
    bool playing;

private:
    int choice;
};

#endif /* Game_hpp */
