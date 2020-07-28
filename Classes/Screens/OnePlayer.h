//
// Created by kirlos on 2020-07-24.
//

#ifndef CONNECT_FOUR_ONEPLAYER_H
#define CONNECT_FOUR_ONEPLAYER_H

#include "../Managers/MenuTextFieldScroller.h"

class OnePlayer : public MenuTextFieldScroller{

const static unsigned int  MAX_NUMBER_OF_ITEMS = 3;
const static unsigned int  MAX_NUMBER_OF_TEXT_FIELDS = 1;

private:
    void setMenuOptions(float width, float height, sf::Font &font);
    void setTextField(float width, float height, sf::Font &font);
public:
    OnePlayer(float width, float height, sf::Font &font);
    ~OnePlayer();
};


#endif //CONNECT_FOUR_ONEPLAYER_H
