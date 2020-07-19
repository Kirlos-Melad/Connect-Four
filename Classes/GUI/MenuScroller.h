//
// Created by kirlos on 2020-07-19.
//

#ifndef CONNECT_FOUR_MENUSCROLLER_H
#define CONNECT_FOUR_MENUSCROLLER_H

#include <SFML/Graphics.hpp>

class MenuScroller {
protected:
    int numberOfItems, selectedItemIndex;
    Text menu[MAX_NUMBER_OF_ITEMS_M];
public:
    Menu(float width , float height, sf::Font &font);
    ~Menu();

    void draw(sf::RenderWindow &window);
    void MoveUp();
    void MoveDown();
    int GetPressedItem() { return selectedItemIndex; }
};


#endif //CONNECT_FOUR_MENUSCROLLER_H
