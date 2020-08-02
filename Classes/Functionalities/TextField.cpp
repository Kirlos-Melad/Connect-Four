//
// Created by kirlos on 2020-07-24.
//

#include "TextField.h"

TextField::TextField() {
    textField.setSize(sf::Vector2f(0, outputText.getCharacterSize()));
    focusedOutlineColor = nonFocusedOutlineColor = sf::Color::White;
    focus = false;
    inputText = "";
    outputText.setFillColor(sf::Color::Black);
}

void TextField::draw(sf::RenderWindow &window) {
    window.draw(textField);
    window.draw(outputText);
}

void TextField::addCharacter(const char &character) {
    inputText += character;
    outputText.setString(inputText);
}

void TextField::removeCharacter() {
    inputText = inputText.substr(0, inputText.size() - 1);
    outputText.setString(inputText);
}

std::string TextField::getText() const {
    return inputText;
}

bool TextField::isFocus() const {
    return focus;
}

void TextField::setFocus(bool focus) {
    TextField::focus = focus;

    if(focus)
        textField.setOutlineColor(focusedOutlineColor);
    else
        textField.setOutlineColor(nonFocusedOutlineColor);
}

const sf::Color TextField::getFocusedOutlineColor() const {
    return focusedOutlineColor;
}

void TextField::setFocusedOutlineColor(const sf::Color &focusedOutlineColor) {
    TextField::focusedOutlineColor = focusedOutlineColor;
}

const sf::Color TextField::getNonFocusedOutlineColor() const {
    return nonFocusedOutlineColor;
}

void TextField::setNonFocusedOutlineColor(const sf::Color &nonFocusedOutlineColor) {
    TextField::nonFocusedOutlineColor = nonFocusedOutlineColor;
}

const sf::Vector2f TextField::getPosition() {
    return textField.getPosition();
}

void TextField::setPosition(const sf::Vector2f &position) {
    textField.setPosition(position);
    textOffSetKeeper();
}

void TextField::setFieldSize(sf::Vector2f size) {
    if(size.y >= outputText.getCharacterSize())
        textField.setSize(size);
    textOffSetKeeper();
}

sf::Vector2f TextField::getFieldSize() const {
    return textField.getSize();
}

void TextField::setCharacterSize(unsigned int size) {
    outputText.setCharacterSize(size);
}

unsigned int TextField::getCharacterSize() const {
    return outputText.getCharacterSize();
}

void TextField::textOffSetKeeper() {
    int offSet = textField.getSize().y - outputText.getCharacterSize();
    int boundsOffSet = 4;
    outputText.setPosition(sf::Vector2f(textField.getPosition().x, textField.getPosition().y + offSet - boundsOffSet));
}

void TextField::setFont(const sf::Font &font) {
    outputText.setFont(font);
}

sf::Font TextField::getFont() const {
    return *outputText.getFont();
}

void TextField::setOutlineThickness(float thickness) {
    textField.setOutlineThickness(thickness);
}

void TextField::setTextColor(sf::Color color) {
    outputText.setFillColor(color);
}

sf::Color TextField::getTextColor() const {
    return outputText.getFillColor();
}

