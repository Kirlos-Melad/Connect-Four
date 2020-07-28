//
// Created by kirlos on 2020-07-28.
//

#ifndef CONNECT_FOUR_MENUTEXTFIELDSCROLLER_H
#define CONNECT_FOUR_MENUTEXTFIELDSCROLLER_H

#include "MenuScroller.h"
#include "../Functionalities/TextField.h"

class MenuTextFieldScroller : public MenuScroller {
private:
    int numberOfTextFields;
    int numberOfCharacters;
    bool focus;
protected:
    TextField *textField;
public:
    MenuTextFieldScroller(float width, float height, sf::Font &font, int numberOfItems, int numberOfTextFields);

    void setTextFieldFocus(bool focus);
    bool isTextFieldFocused() const;
    void textInputHandler(sf::Event e);

    int getNumberOfCharacters() const;

    void setNumberOfCharacters(int numberOfCharacters);

    //Hide the Base class functions
    void draw(sf::RenderWindow &window);
    void moveUp();
    void moveDown();

    ~MenuTextFieldScroller();
};


#endif //CONNECT_FOUR_MENUTEXTFIELDSCROLLER_H
