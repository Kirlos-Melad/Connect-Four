//
// Created by kirlos on 2020-07-19.
//

#ifndef CONNECT_FOUR_MAINMENU_H
#define CONNECT_FOUR_MAINMENU_H

#include "MenuScroller.h"

#define MAX_NUMBER_OF_ITEMS 5

class MainMenu : public MenuScroller{
public:
    MainMenu(float width, float height, sf::Font &font);
    ~MainMenu();
};


#endif //CONNECT_FOUR_MAINMENU_H
