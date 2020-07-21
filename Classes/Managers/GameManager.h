//
// Created by kirlos on 2020-07-20.
//

#ifndef CONNECT_FOUR_GAMEMANAGER_H
#define CONNECT_FOUR_GAMEMANAGER_H

#include "../../Headers/includes.h"
#include "../Screens/MainMenu.h"

class GameManager {

#define desktopWidth 1920
#define desktopHeight 1080

private:
    sf::Font font;
    sf::Music music;
    float soundVolume;
    int const screenWidth = 1920, screenHeight = 1080;
    sf::RenderWindow window;
    sf::Sprite backGround;
    sf::Texture textureBackGround;
public:
    GameManager();
    void start(); // main menu
    void gameboard();
    ~GameManager();
};


#endif //CONNECT_FOUR_GAMEMANAGER_H
