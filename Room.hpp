#pragma once
#include <list>
#include <vector>
#include <iostream>
#include <string>
#include <ctime>

class Room
{
public:
    
	Room(std::string roomName);
    std::string getroomName();
    std::string getroomText();
	void setRooms(Room* northRoom, Room* eastRoom, Room* southRoom, Room* westRoom);
	Room* getRoom(std::string direction);
    Room* getText(std::string direction);



private:
    std::string roomName;
    std::string roomText;
	Room* northRoom;
	Room* eastRoom;
	Room* southRoom;
	Room* westRoom;
};

