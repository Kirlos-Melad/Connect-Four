//
// Created by kirlos on 2020-07-19.
//

#ifndef CONNECT_FOUR_MENUSCROLLER_H
#define CONNECT_FOUR_MENUSCROLLER_H

#include "../headers.h"

class MenuScroller {
private:
    int numberOfItems, selectedItemIndex;
protected:
    sf::Text *menu;
public:
    MenuScroller(float width, float height, sf::Font &font, int numberOfItems);
    ~MenuScroller();

    void draw(sf::RenderWindow &window);
    void moveUp();
    void moveDown();
    int getPressedItem() { return selectedItemIndex; }
};


#endif //CONNECT_FOUR_MENUSCROLLER_H