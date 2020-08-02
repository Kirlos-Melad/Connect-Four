//
// Created by kirlos on 2020-07-28.
//

#include "MenuTextFieldScroller.h"

MenuTextFieldScroller::MenuTextFieldScroller(float width, float height, sf::Font &font, int numberOfItems, int numberOfTextFields) :
 MenuScroller(width, height, font, numberOfItems) {
    this->numberOfTextFields = numberOfTextFields;
    textField = new TextField[numberOfTextFields];
    focus = false;
    numberOfCharacters = 0;
}

void MenuTextFieldScroller::textInputHandler(sf::Event e) {
    if (!focus || e.type != sf::Event::TextEntered)
        return;

    if (textField[this->getPressedItem()].getText().size() != 0 && e.text.unicode == 8){   // Delete key
        textField[this->getPressedItem()].removeCharacter();
    }
    else if (textField[this->getPressedItem()].getText().size() <= numberOfCharacters && e.text.unicode < 128){
        textField[this->getPressedItem()].addCharacter((char)e.text.unicode);
    }
}

void MenuTextFieldScroller::setTextFieldFocus(bool focus) {
    this->focus = focus;
    textField[this->getPressedItem()].setFocus(this->focus);
}

bool MenuTextFieldScroller::isTextFieldFocused() const {
    return focus;
}

std::string MenuTextFieldScroller::getText(int i) const {
    return textField[i].getText();
}

int MenuTextFieldScroller::getNumberOfCharacters() const {
    return numberOfCharacters;
}

void MenuTextFieldScroller::setNumberOfCharacters(int numberOfCharacters) {
    MenuTextFieldScroller::numberOfCharacters = numberOfCharacters;
}

void MenuTextFieldScroller::moveUp() {
    if(!focus)
        MenuScroller::moveUp();
}

void MenuTextFieldScroller::moveDown() {
    if(!focus)
        MenuScroller::moveDown();
}

void MenuTextFieldScroller::draw(sf::RenderWindow &window) {
    MenuScroller::draw(window);
    for(int i = 0; i < numberOfTextFields; i++){
        textField[i].draw(window);
    }
}

MenuTextFieldScroller::~MenuTextFieldScroller() {
    delete [] textField;
}
