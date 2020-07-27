//
// Created by kirlos on 2020-07-23.
//

#ifndef CONNECT_FOUR_GAMETYPE_H
#define CONNECT_FOUR_GAMETYPE_H

#include "MenuScroller.h"

#define MAX_NUMBER_OF_ITEMS 3

class GameType : public MenuScroller {
public:
    GameType(float width, float height, sf::Font &font);
    ~GameType();
};


#endif //CONNECT_FOUR_GAMETYPE_H
