//
// Created by kirlos on 2020-07-19.
//

#ifndef CONNECT_FOUR_MAINMENU_H
#define CONNECT_FOUR_MAINMENU_H

#include "../Managers/MenuScroller.h"

class MainMenu : public MenuScroller{
const static unsigned int MAX_NUMBER_OF_ITEMS = 5;

public:
    MainMenu(float width, float height, sf::Font &font);
    ~MainMenu();
};


#endif //CONNECT_FOUR_MAINMENU_H
