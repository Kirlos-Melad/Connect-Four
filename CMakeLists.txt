cmake_minimum_required(VERSION 3.17)
project(Connect_Four)

set(CMAKE_CXX_STANDARD 20)

add_executable(Connect_Four main.cpp Classes/GUI/GameBoardManager.cpp Classes/GUI/GameBoardManager.h Classes/Player/Player.cpp Classes/Player/Player.h Classes/Player/VeiGoBot.cpp Classes/Player/VeiGoBot.h Classes/GUI/MenuScroller.cpp Classes/GUI/MenuScroller.h)

#link SFML
include_directories(/usr/local/include)
find_package(SFML 2.5.1 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(Connect_Four sfml-system sfml-window sfml-graphics sfml-network sfml-audio)