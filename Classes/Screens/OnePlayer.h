//
// Created by kirlos on 2020-07-24.
//

#ifndef CONNECT_FOUR_ONEPLAYER_H
#define CONNECT_FOUR_ONEPLAYER_H

#include "MenuScroller.h"
#include "TextField.h"

#define  MAX_NUMBER_OF_ITEMS 3

class OnePlayer : public MenuScroller{
private:
    TextField textField;
    unsigned int numberOfCharacters;
private:
    void setMenuOptions(float width, float height, sf::Font &font);
    void setTextField(float width, float height);
public:
    OnePlayer(float width, float height, sf::Font &font);
    ~OnePlayer();
};


#endif //CONNECT_FOUR_ONEPLAYER_H
