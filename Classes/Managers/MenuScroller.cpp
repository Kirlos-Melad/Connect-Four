//
// Created by kirlos on 2020-07-19.
//

#include "MenuScroller.h"

MenuScroller::MenuScroller(float width, float height, sf::Font &font, int numberOfItems) {
    this->numberOfItems = numberOfItems;
    menu = new sf::Text[numberOfItems];
    selectedItemIndex = 0;
}

void MenuScroller::draw(sf::RenderWindow &window) {
    for (int i = 0; i < numberOfItems; i++)
    {
        window.draw(menu[i]);
    }
}

void MenuScroller::moveUp() {
    if (selectedItemIndex - 1 >= 0)
    {
        menu[selectedItemIndex].setFillColor(sf::Color::Red);
        selectedItemIndex--;
        menu[selectedItemIndex].setFillColor(sf::Color::Blue);
    }
}

void MenuScroller::moveDown() {
    if (selectedItemIndex + 1 < numberOfItems)
    {
        menu[selectedItemIndex].setFillColor(sf::Color::Red);
        selectedItemIndex++;
        menu[selectedItemIndex].setFillColor(sf::Color::Blue);
    }
}

MenuScroller::~MenuScroller() {
    delete [] menu;
}
