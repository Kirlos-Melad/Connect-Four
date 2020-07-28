//
// Created by kirlos on 2020-07-24.
//

#include "OnePlayer.h"

OnePlayer::OnePlayer(float width, float height, sf::Font &font)
: MenuTextFieldScroller(width, height, font, MAX_NUMBER_OF_ITEMS, MAX_NUMBER_OF_TEXT_FIELDS) {
    this->setNumberOfCharacters(10);
    setMenuOptions(width, height, font);
    setTextField(width, height, font);
}

void OnePlayer::setMenuOptions(float width, float height, sf::Font &font) {
    menu[0].setFont(font);
    menu[0].setFillColor(sf::Color::Blue);
    menu[0].setString("First Player Name");
    menu[0].setPosition(sf::Vector2f(X_OFFSET, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));
    menu[0].setCharacterSize(FONT_SIZE);



    menu[1].setFont(font);
    menu[1].setFillColor(sf::Color::Red);
    menu[1].setString("Done");
    menu[1].setPosition(sf::Vector2f(X_OFFSET, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));
    menu[1].setCharacterSize(FONT_SIZE);

    menu[2].setFont(font);
    menu[2].setFillColor(sf::Color::Red);
    menu[2].setString("Back");
    menu[2].setPosition(sf::Vector2f(X_OFFSET, height / (MAX_NUMBER_OF_ITEMS + 1) * 3));
    menu[2].setCharacterSize(FONT_SIZE);
}

void OnePlayer::setTextField(float width, float height, sf::Font &font) {
    //Text Field settings
    textField[0].setOutlineThickness(3);
    textField[0].setNonFocusedOutlineColor(sf::Color(127, 127, 127)); //Gray Color
    textField[0].setFocusedOutlineColor(sf::Color::Blue);
    textField[0].setPosition(sf::Vector2f(X_OFFSET * 5, height / (MAX_NUMBER_OF_ITEMS + 1) * 1.08)); //Beside First Choice
    textField[0].setFieldSize(sf::Vector2f(textField[0].getCharacterSize() * this->getNumberOfCharacters(), textField[0].getFieldSize().y));
    //Text Settings
    textField[0].setFont(font);
}

OnePlayer::~OnePlayer() {

}
