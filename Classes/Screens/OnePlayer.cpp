//
// Created by kirlos on 2020-07-24.
//

#include "OnePlayer.h"

OnePlayer::OnePlayer(float width, float height, sf::Font &font)
: MenuScroller(width, height, font, MAX_NUMBER_OF_ITEMS) {
    numberOfCharacters = 10;

    setMenuOptions(width, height, font);
    setTextField(width, height);
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

void OnePlayer::setTextField(float width, float height) {
    sf::Font font;

    if (!font.loadFromFile("../Assets/NotoSerif-Black.ttf"))
    {
        std::cout << "Error .. loading font";
        //do some
    }

    TextField textField;
    textField.setOutlineThickness(2);
    textField.setNonFocusedOutlineColor(sf::Color(127, 127, 127));
    textField.setFocusedOutlineColor(sf::Color::Blue);
    textField.setPosition(sf::Vector2f(X_OFFSET + 50, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));
    textField.setFieldSize(sf::Vector2f(textField.getCharacterSize() * numberOfCharacters, textField.getFieldSize().y));

    textField.setFont(font);
    textField.setTextColor(sf::Color::Black);
}

OnePlayer::~OnePlayer() {

}
