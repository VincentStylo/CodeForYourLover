//
//  Game.cpp
//  Project-1
//
//  Created by Martinez Torres, Jose on 3/3/19.
//  Copyright © 2019 Jose Martinez-Torres. All rights reserved.
//

#include "Game.hpp"
#include "Room.hpp"
#include "Item.hpp"
#include "Character.cpp"
#include <iostream>

void Game::loadItems()
{
    Item i1 = Item("Connect Card", 0, 0, 0);
    Item i2 = Item("Cheat Sheet", 0, 0, 0);
    Item i3 = Item("iPhone Charger", 0, 0, 0);
    Item i4 = Item("Chips", 0, 0, 0);
    Item i5 = Item("Kale Chips", 0, 0, 0);
    Item i6 = Item("Coding Book", 0, 0, 0);
    Item i7 = Item("Weed", 0, 0, 0);
    Item i8 = Item("Sorry Card", 0, 0, 0);
    
}
void Game::loadChars()
{
    Character e1 = Character("Jock", 50, 5, 2);
}

Game::Game()
{
    
    std::vector<Room*> rooms;
    std::vector<Room*> text;
    Room* currentRoom;
    Room* currentText;
    
    
    //creates a vector of the Rooms and their names
    rooms.push_back(new Room("Entrance"));
    text.push_back(new Room("It's the Entrance to the Compsci Wing. Go South to go inside!\n\n"));
    rooms.push_back(new Room("Entrance Hallway"));
    text.push_back(new Room("Congrats! You've made it in! Now Go West to get closer to the Corner!\n\n"));
    rooms.push_back(new Room("Entrance Corner"));
    text.push_back(new Room("Alright! Now, To the West you see Lockers, and a Jock! \n\n"));
    rooms.push_back(new Room("LockerRoom"));
    text.push_back(new Room("Most of these lockers are unlocked... Just Saying...\n\n"));
    rooms.push_back(new Room("Secretary's Waiting Area"));
    text.push_back(new Room("Well, the Secretary's in there, I wonder what you can do in there\n\n"));
    rooms.push_back(new Room("Jock's Corner"));
    text.push_back(new Room("This guy looks angry...\n\n"));
    rooms.push_back(new Room("Office Lounge"));
    text.push_back(new Room("Looking South you see, the Entrance to the CSEB Lab, and North is Secretary's Office\n\n"));
    rooms.push_back(new Room("Classroom Hallway"));
    text.push_back(new Room("East? A classroom with a Normie. To the left, A classroom with a Normie\n\n"));
    rooms.push_back(new Room("Front of CSEB's room"));
    text.push_back(new Room("To the East is the CSEB room. He awaits there. South is the Balcony is that girl that had a crush on you and she looks like she aint happy... \n\n"));
    rooms.push_back(new Room("Classroom Hallway"));
    text.push_back(new Room("North are classrooms, South is the Server Room\n\n"));
    rooms.push_back(new Room("Computer Science Elite's Clubroom"));
    text.push_back(new Room("East. He's East. His Door's wide open, and he's glaring at you with the power to make you single with a letter grade on a comuter that he himself built. OS and Everything\n\n"));
    rooms.push_back(new Room("Outside the Server Room"));
    text.push_back(new Room("Server Room is to the west, south is the Advanced Computer Science Lab\n\n"));
    rooms.push_back(new Room("Balcony"));
    text.push_back(new Room("oh boy. she doesn't look too happy. \n\n"));
    rooms.push_back(new Room("Hallway"));
    text.push_back(new Room("Crosspaths! West, is the Server Room. East is the entrance to the CSEB room\n\n"));
    rooms.push_back(new Room("Classroom"));
    text.push_back(new Room("Here lies an empty Classroom. I wonder if there's something here...\n\n"));
    rooms.push_back(new Room("Outside Computer Science Lab"));
    text.push_back(new Room("West is where you have class with GrandMaster Esteves. Your pal is in there... Perhaps he could give you some advice\n\n"));
    rooms.push_back(new Room("Advanced Computer Science Lab"));
    text.push_back(new Room("NOPE! YOUR PAL WANTS YOU TO FAIL TO STEAL YOUR GIRL!\n\n"));
    rooms.push_back(new Room("Secretary's Room"));
    text.push_back(new Room("Nothing much going on here. Uhh... Nothing to grab here hahaha...\n\n"));
    rooms.push_back(new Room("GrandMaster's Esteves Lair"));
    text.push_back(new Room("Error:Information is classified by Grandmaster Esteves\n\n"));
    rooms.push_back(new Room("Computer Science Server Room"));
    text.push_back(new Room("Yikes a normie! Remember when you were a normie\n\n"));
    rooms.push_back(new Room("Computer Lab"));
    text.push_back(new Room("A STEM student wants to kick your ass because you threw his biology book in the trash!\n\n"));
    
    
    //Creates an array of the Rooms
    rooms[0]->setRooms(nullptr, nullptr, rooms[1], nullptr);
    rooms[1]->setRooms(rooms[0],nullptr, nullptr, rooms[2]);
    rooms[2]->setRooms(nullptr, rooms[1], rooms[4], rooms[3]);
    rooms[3]->setRooms(nullptr,rooms[2], nullptr, rooms[5]);
    rooms[4]->setRooms(rooms[2],rooms[17],rooms[6],nullptr);
    rooms[5]->setRooms(nullptr,rooms[3],rooms[7],nullptr);
    rooms[6]->setRooms(rooms[4], nullptr, rooms[8], nullptr);
    rooms[7]->setRooms(rooms[5], rooms[20], rooms[9],rooms[14]);
    rooms[8]->setRooms(rooms[6], rooms[10], rooms[12], rooms[13]);
    rooms[9]->setRooms(rooms[8], nullptr ,rooms[11], nullptr);
    rooms[10]->setRooms(nullptr, rooms[18], nullptr, rooms[8]);
    rooms[11]->setRooms(rooms[9], rooms[13], rooms[15], rooms[19]);
    rooms[12]->setRooms(rooms[8], nullptr, nullptr,nullptr);
    rooms[13]->setRooms(nullptr,rooms[8], nullptr, rooms[11]);
    rooms[14]->setRooms(nullptr,rooms[7],nullptr,nullptr);
    rooms[15]->setRooms(rooms[11], nullptr, nullptr, rooms[16]);
    rooms[16]->setRooms(nullptr, rooms[15], nullptr, nullptr);
    rooms[17]->setRooms(nullptr, nullptr, nullptr, rooms[4]);
    rooms[18]->setRooms(nullptr, nullptr, nullptr, rooms[10]);
    rooms[19]->setRooms(nullptr, rooms[11], nullptr, nullptr);
    rooms[20]->setRooms(nullptr, nullptr, nullptr, rooms[7]);
    
    currentRoom = rooms[0];
    currentText = text[0];
    
    
label:
    std::string choice = "0";
    std::string userInput = "";
    std::cout << "Overworld Menu!" << std::endl;
    std::cout << "0. Quit" << std::endl;
    std::cout << "1. Move Somewhere" << std::endl;
    std::cout << "2. Check Inventory" << std::endl;
    std::cout << "3. Look Around" << std::endl;
    std::cout << "\n";
    std::cout << "What do you want to do? \n";
    std::getline(std::cin, choice);
    int i = std::stoi(choice);
    std::cout << "\n";
    
    switch (i) {
        case 0:
            playing = false;
            break;
        case 1:
            while (userInput != "Done" ) {
                if (currentRoom != nullptr){
                    std::cout << currentRoom->getroomName() << std::endl;
                }
                std::cout << "Where do you want to go? \n";
                std::cout << "When you're done, type, Done!";
                std::getline(std::cin, userInput);
                currentRoom = currentRoom->getRoom(userInput);
                std::cout << "\n\n";
            }
            break;
        case 2:
            //std::cout << Item->getItem();
        case 3:
            std::cout <<currentText ->getroomName();
        default:
            goto label;
            
    }
    goto label;
}

