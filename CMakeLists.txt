cmake_minimum_required(VERSION 3.17)
project(Connect_Four)

set(CMAKE_CXX_STANDARD 20)

add_executable(Connect_Four main.cpp Classes/Managers/GameBoardManager.cpp Classes/Managers/GameBoardManager.h Classes/Players/Player.cpp Classes/Players/Player.h Classes/Players/VeiGoBot.cpp Classes/Players/VeiGoBot.h Classes/Managers/MenuScroller.cpp Classes/Managers/MenuScroller.h Classes/Screens/MainMenu.cpp Classes/Screens/MainMenu.h Classes/Managers/GameManager.cpp Classes/Managers/GameManager.h Headers/includes.h Classes/Screens/GameBoard.cpp Classes/Screens/GameBoard.h Headers/GameBoardBasic.h Classes/Screens/GameType.cpp Classes/Screens/GameType.h Classes/Functionalities/TextField.cpp Classes/Functionalities/TextField.h Classes/Screens/OnePlayer.cpp Classes/Screens/OnePlayer.h Classes/Screens/TwoPlayer.cpp Classes/Screens/TwoPlayer.h Classes/Managers/MenuTextFieldScroller.cpp Classes/Managers/MenuTextFieldScroller.h Classes/Functionalities/ConnectFourStructure.cpp Classes/Functionalities/ConnectFourStructure.h Classes/Players/Judge.cpp Classes/Players/Judge.h Classes/Functionalities/SharedPointer.cpp Classes/Functionalities/SharedPointer.h Classes/Functionalities/Array1D.cpp Classes/Functionalities/Array1D.h Classes/Functionalities/Array2D.cpp Classes/Functionalities/Array2D.h Headers/FunctionalitiesIncludes.h)

#link SFML
include_directories(/usr/local/include)
find_package(SFML 2.5.1 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(Connect_Four sfml-system sfml-window sfml-graphics sfml-network sfml-audio)