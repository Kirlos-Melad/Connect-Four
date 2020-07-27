//
// Created by kirlos on 2020-07-19.
//

#include "MainMenu.h"

MainMenu::MainMenu(float width, float height, sf::Font &font) : MenuScroller(width, height, font, MAX_NUMBER_OF_ITEMS){
    menu[0].setFont(font);
    menu[0].setFillColor(sf::Color::Blue);
    menu[0].setString("Play");
    menu[0].setPosition(sf::Vector2f(X_OFFSET, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));
    menu[0].setCharacterSize(FONT_SIZE);

    menu[1].setFont(font);
    menu[1].setFillColor(sf::Color::Red);
    menu[1].setString("Hall Of Fame");
    menu[1].setPosition(sf::Vector2f(X_OFFSET, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));
    menu[1].setCharacterSize(FONT_SIZE);

    menu[2].setFont(font);
    menu[2].setFillColor(sf::Color::Red);
    menu[2].setString("Options");
    menu[2].setPosition(sf::Vector2f(X_OFFSET, height / (MAX_NUMBER_OF_ITEMS + 1) * 3));
    menu[2].setCharacterSize(FONT_SIZE);

    menu[3].setFont(font);
    menu[3].setFillColor(sf::Color::Red);
    menu[3].setString("About Us");
    menu[3].setPosition(sf::Vector2f(X_OFFSET, height / (MAX_NUMBER_OF_ITEMS + 1) * 4));
    menu[3].setCharacterSize(FONT_SIZE);

    menu[4].setFont(font);
    menu[4].setFillColor(sf::Color::Red);
    menu[4].setString("Exit");
    menu[4].setPosition(sf::Vector2f(X_OFFSET, height / (MAX_NUMBER_OF_ITEMS + 1) * 5));
    menu[4].setCharacterSize(FONT_SIZE);
}

MainMenu::~MainMenu() {

}
