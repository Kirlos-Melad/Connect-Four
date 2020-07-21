//
// Created by kirlos on 2020-07-20.
//

#include "GameManager.h"
#include "GameBoardManager.h"
#include "../Screens/GameBoard.h"

GameManager::GameManager() {
    //Handle Sound
    /*if (!music.openFromFile("../Assets/Elektronomia - Limitless [NCS Bass Boosted].ogg")) //By default, sfml expected the image to be in cmake-build-debug folder
    {
        std::cout << "Error .. loading sound";
        //do some
    }
    music.play();
    soundVolume = 100.0f;
    music.setVolume(soundVolume);
    music.setLoop(true);*/

    //Handle Font
    if (!font.loadFromFile("../Assets/NotoSerif-Black.ttf"))
    {
        std::cout << "Error .. loading font";
       //do some
    }

    //Handle window
    window.create(sf::VideoMode(screenWidth, screenHeight), "Connect Four", sf::Style::None);
    window.setPosition(sf::Vector2i((desktopWidth - screenWidth) / 2, (desktopHeight - screenHeight) / 4));


    if(!textureBackGround.loadFromFile("../Assets/backGround.jpg")){
        std::cout << "Error .. loading background.";
        //do some
    }
    backGround.setTexture(textureBackGround);
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
                        gameboard();
                    }
                    else if(choosenItem == 1){

                    }
                    else if(choosenItem == 2){

                    }
                    else if(choosenItem == 3){

                    }
                    else if(choosenItem == 4){
                        window.close();
                    }
                }
            }
        }
        window.clear();
        window.draw(backGround);
        mainMenu.draw(window);
        window.display();
    }
}

void GameManager::gameboard() {
    GameBoardManager gameBoardManager;

    //DELETE PLAYERS
    Player p1("p1"), p2("p2");
    p1.setTurn(FIRST_PLAYER);
    p1.setColor('r');

    p2.setTurn(SECOND_PLAYER);
    p2.setColor('b');

    GameBoard gameBoard(screenWidth, screenHeight, p1, p2);

    while(window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::MouseButtonReleased){
                if (event.key.code == sf::Mouse::Left){
                    int xPosition = sf::Mouse::getPosition(window).x;
                    if(xPosition < 100){
                        //gameBoardManager.insertPieceAt(p1.getTurn(), 0);
                    }
                }
            }
        }
        window.clear();
        gameBoard.draw(window, gameBoardManager.getBoardCopy());
        window.display();
    }
}

GameManager::~GameManager() {

}
