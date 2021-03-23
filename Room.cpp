#include "Room.hpp"


//Gets the name of the Room, Not much else to say about it
Room::Room(std::string roomName) {
    this->roomName = roomName;
}
std::string Room::getroomName() {
    return this->roomName;
}



//gets the text description of the room. Nifty!

void Room::setRooms(Room* northRoom, Room* eastRoom, Room* southRoom, Room* westRoom) {
    this->northRoom = northRoom;
    this->southRoom = southRoom;
    this->eastRoom = eastRoom;
    this->westRoom = westRoom;
}

Room* Room::getRoom(std::string roomName) {
    if (roomName == "N" && this->northRoom != nullptr) {
        return this->northRoom;
    }
    else if (roomName == "E" && this->eastRoom != nullptr) {
        return this->eastRoom;
    }
    else if (roomName == "S" && this->southRoom != nullptr) {
        return this->southRoom;
    }
    else if (roomName == "W" && this->westRoom != nullptr) {
        return this->westRoom;
    }
    else {
        return this;
    }
}
    
    Room* Room::getText(std::string roomText) {
        if (roomName == "N" && this->northRoom != nullptr) {
            return this->northRoom;
        }
        else if (roomName == "E" && this->eastRoom != nullptr) {
            return this->eastRoom;
        }
        else if (roomName == "S" && this->southRoom != nullptr) {
            return this->southRoom;
        }
        else if (roomName == "W" && this->westRoom != nullptr) {
            return this->westRoom;
        }
        else {
            std::cout << "You bumped into a wall while on your phone";
            return this;
        }
    }
