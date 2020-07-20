cmake_minimum_required(VERSION 3.17)
project(Connect_Four)

set(CMAKE_CXX_STANDARD 20)

add_executable(Connect_Four main.cpp Classes/Managers/GameBoardManager.cpp Classes/Managers/GameBoardManager.h Classes/Players/Player.cpp Classes/Players/Player.h Classes/Players/VeiGoBot.cpp Classes/Players/VeiGoBot.h Classes/Screens/MenuScroller.cpp Classes/Screens/MenuScroller.h Classes/Screens/MainMenu.cpp Classes/Screens/MainMenu.h Classes/Managers/GameManager.cpp Classes/Managers/GameManager.h Classes/headers.h Classes/Screens/GameBoard.cpp Classes/Screens/GameBoard.h)

#link SFML
include_directories(/usr/local/include)
find_package(SFML 2.5.1 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(Connect_Four sfml-system sfml-window sfml-graphics sfml-network sfml-audio)