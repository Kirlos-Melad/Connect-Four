//
// Created by kirlos on 2020-07-20.
//

#include "GameManager.h"

GameManager::GameManager() {
    //Handle Sound
    sf::SoundBuffer soundbuffer;
    if (!soundbuffer.loadFromFile("connect_four_classic.mp4"))
    {
        cout << "Error .. loading sound";
        //do some
    }
    sound.setBuffer(soundbuffer);
    sound.play();
    soundVolume = 100f;
    sound.setVolume(soundVolume);
    sound.setLoop(true);

    //Handle Font
    if (!font.loadFromFile("NotoSerif-Black.ttf"))
    {
        cout << "Error .. loading font";
       //do some
    }

    //Handle window
    window.create(sf::VideoMode(screenWidth, screenHeight), "Connect Four", Style::None);
    window.setPosition(sf::Vector2i((desktopWidth - screenWidth) / 2, (desktopHeight - screenHeight) / 4));

    sf::Texture bground;
    if(!bground.loadFromFile("../../Assets/backGround.jpg")){
        cout << "Error .. loading background.";
        //do some
    }
    backGround.setTexture(bground);
}

void GameManager::start() {
    MainMenu mainMenu(window.getSize().x, window.getSize().y, font);

    while(window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::KeyReleased) {
                if (event.key.code == sf::Keyboard::Up)
                {
                    mainMenu.moveUp();
                }
                else if (event.key.code == sf::Keyboard::Down)
                {
                    mainMenu.moveDown();
                }
                else if (event.key.code == sf::Keyboard::Enter) {
                    int choosenItem = mainMenu.getPressedItem();
                    if(choosenItem == 0){

                    }
                    else if(choosenItem == 1){

                    }
                    else if(choosenItem == 2){

                    }
                    else if(choosenItem == 3){

                    }
                    else if(choosenItem == 4){

                    }
                }
            }
        }
    }
}

GameManager::~GameManager() {

}
