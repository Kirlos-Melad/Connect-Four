//
// Created by kirlos on 2020-07-23.
//

#include "GameType.h"

GameType::GameType(float width, float height, sf::Font &font) : MenuScroller(width, height, font, MAX_NUMBER_OF_ITEMS) {
    menu[0].setFont(font);
    menu[0].setFillColor(sf::Color::Blue);
    menu[0].setString("Player VS Player");
    menu[0].setPosition(sf::Vector2f(X_OFFSET, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));
    menu[0].setCharacterSize(FONT_SIZE);

    menu[1].setFont(font);
    menu[1].setFillColor(sf::Color::Red);
    menu[1].setString("Player VS VeiGoBot");
    menu[1].setPosition(sf::Vector2f(X_OFFSET, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));
    menu[1].setCharacterSize(FONT_SIZE);

    menu[2].setFont(font);
    menu[2].setFillColor(sf::Color::Red);
    menu[2].setString("Back");
    menu[2].setPosition(sf::Vector2f(X_OFFSET, height / (MAX_NUMBER_OF_ITEMS + 1) * 3));
    menu[2].setCharacterSize(FONT_SIZE);
}

GameType::~GameType() {

}
