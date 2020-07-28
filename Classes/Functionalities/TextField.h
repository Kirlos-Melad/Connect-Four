//
// Created by kirlos on 2020-07-24.
//

#ifndef CONNECT_FOUR_TEXTFIELD_H
#define CONNECT_FOUR_TEXTFIELD_H

#include "../../Headers/includes.h"

class TextField {
private:
    std::string inputText;
    sf::Text outputText;
    sf::RectangleShape textField;
    bool focus;
    sf::Color focusedOutlineColor, nonFocusedOutlineColor;
private:
    void textOffSetKeeper();
public:
    TextField();

    void draw(sf::RenderWindow &window);

    void addCharacter(const char &character);

    void removeCharacter();

    //Setters & Getters
    void setFont(const sf::Font &font);

    sf::Font getFont() const;

    void setFieldSize(sf::Vector2f size);

    sf::Vector2f getFieldSize() const;

    void setCharacterSize(unsigned int size);

    unsigned int getCharacterSize() const;

    void setPosition(const sf::Vector2f &position);

    const sf::Vector2f getPosition();

    sf::String getText() const;

    void setOutlineThickness(float thickness);

    bool isFocus() const;

    void setFocus(bool focus);

    const sf::Color getFocusedOutlineColor() const;

    void setFocusedOutlineColor(const sf::Color &focusedOutlineColor);

    const sf::Color getNonFocusedOutlineColor() const;

    void setNonFocusedOutlineColor(const sf::Color &nonFocusedOutlineColor);

    void setTextColor(sf::Color color);

    sf::Color getTextColor() const;
};


#endif //CONNECT_FOUR_TEXTFIELD_H
