//
// Created by kirlos on 2020-07-20.
//

#include "GameManager.h"
#include "GameBoardManager.h"
#include "../Screens/GameType.h"
#include "../Screens/OnePlayer.h"
#include "../Screens/GameBoard.h"
#include "../Players/VeiGoBot.h"

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

void GameManager::Start() {
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
                        GameTypeMenu();
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

void GameManager::GameTypeMenu() {
    GameType gameType(window.getSize().x, window.getSize().y, font);

    while(window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::KeyReleased) {
                if (event.key.code == sf::Keyboard::Up)
                {
                    gameType.moveUp();
                }
                else if (event.key.code == sf::Keyboard::Down)
                {
                    gameType.moveDown();
                }
                else if (event.key.code == sf::Keyboard::Enter) {
                    int choosenItem = gameType.getPressedItem();
                    if(choosenItem == 0){

                    }
                    else if(choosenItem == 1){
                        OnePlayerMenu();
                    }
                    else if(choosenItem == 2){
                        return;
                    }
                }
            }
        }
        window.clear();
        window.draw(backGround);
        gameType.draw(window);
        window.display();
    }
}

void GameManager::OnePlayerMenu() {
    OnePlayer onePlayer(window.getSize().x, window.getSize().y, font);

    while(window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::KeyReleased) {
                if (event.key.code == sf::Keyboard::Up)
                {
                    onePlayer.moveUp();
                }
                else if (event.key.code == sf::Keyboard::Down)
                {
                    onePlayer.moveDown();
                }
                else if (event.key.code == sf::Keyboard::Enter) {
                    int choosenItem = onePlayer.getPressedItem();
                    if(choosenItem == 0){
                        onePlayer.setTextFieldFocus(!onePlayer.isTextFieldFocused());
                    }
                    else if(choosenItem == 1){
                        Player p(onePlayer.getText(0));
                        Play();
                    }
                    else if(choosenItem == 2){
                        return;
                    }
                }
            }
            if(onePlayer.isTextFieldFocused()){
                onePlayer.textInputHandler(event);
            }
        }
        window.clear();
        window.draw(backGround);
        onePlayer.draw(window);
        window.display();
    }
}

void GameManager::Play() {
    GameBoardManager gameBoardManager;

    //DELETE PLAYERS
    Player p1("p1");
    p1.setTurn(FIRST_PLAYER);

    VeiGoBot p2;
    p2.setTurn(SECOND_PLAYER);

    GameBoard gameBoard(screenWidth, screenHeight);
    const int xOffSet = gameBoard.getXOffSet();
    int switcher = 0;

    while(window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::MouseButtonReleased){
                if (event.mouseButton.button == sf::Mouse::Left){
                    int xPosition = sf::Mouse::getPosition(window).x;

                    for(int i = 1; i <= COLUMN_COUNT; i++){
                        if(xPosition < xOffSet + (110 * i) && xPosition > xOffSet + (110 * (i - 1))){
                            //gameBoardManager.insertPieceAt(((switcher % 2) + 1 == 1 ? p1.getTurn() : p2.getTurn()), i - 1);
                            if((switcher % 2) + 1 == 1){
                                gameBoardManager.insertPieceAt(p1.getTurn(), i - 1);
                                switcher++;
                            }
                            /*else{
                                gameBoardManager.insertPieceAt(p2.getTurn(), p2.veigoPlay(gameBoardManager.cloneGameBoard()));
                            }*/
                            break;
                        }
                    }
                }
            }
        }
        if((switcher % 2) + 1 == 2){
            gameBoardManager.insertPieceAt(p2.getTurn(), p2.veigoPlay(gameBoardManager.cloneGameBoard()));
            switcher++;
        }
        window.clear();
        gameBoard.draw(window, gameBoardManager.cloneGameBoard());
        window.display();
    }
}

GameManager::~GameManager() {

}
