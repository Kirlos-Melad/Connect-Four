//
// Created by kirlos on 2020-07-20.
//

#ifndef CONNECT_FOUR_GAMEMANAGER_H
#define CONNECT_FOUR_GAMEMANAGER_H

#include "../headers.h"
#include "../Screens/MainMenu.h"

class GameManager {

#define desktopWidth 1920
#define desktopHeight 1080

private:
    sf::Font font;
    sf::Sound sound;
    float soundVolume;
    int const screenWidth = 1920, screenHeight = 1080;
    RenderWindow window;
    Sprite backGround;
public:
    GameManager();
    void start(); // main menu
    void
    ~GameManager();
};


#endif //CONNECT_FOUR_GAMEMANAGER_H
