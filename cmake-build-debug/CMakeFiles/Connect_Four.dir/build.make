# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/kirlos/CLionProjects/Connect Four"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/kirlos/CLionProjects/Connect Four/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Connect_Four.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Connect_Four.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Connect_Four.dir/flags.make

CMakeFiles/Connect_Four.dir/main.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Connect_Four.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/main.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/main.cpp"

CMakeFiles/Connect_Four.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/main.cpp" > CMakeFiles/Connect_Four.dir/main.cpp.i

CMakeFiles/Connect_Four.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/main.cpp" -o CMakeFiles/Connect_Four.dir/main.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Managers/GameBoardManager.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Managers/GameBoardManager.cpp.o: ../Classes/Managers/GameBoardManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Managers/GameBoardManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Managers/GameBoardManager.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Managers/GameBoardManager.cpp"

CMakeFiles/Connect_Four.dir/Classes/Managers/GameBoardManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Managers/GameBoardManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Managers/GameBoardManager.cpp" > CMakeFiles/Connect_Four.dir/Classes/Managers/GameBoardManager.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Managers/GameBoardManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Managers/GameBoardManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Managers/GameBoardManager.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Managers/GameBoardManager.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Players/Player.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Players/Player.cpp.o: ../Classes/Players/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Players/Player.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Players/Player.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Players/Player.cpp"

CMakeFiles/Connect_Four.dir/Classes/Players/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Players/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Players/Player.cpp" > CMakeFiles/Connect_Four.dir/Classes/Players/Player.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Players/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Players/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Players/Player.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Players/Player.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Players/VeiGoBot.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Players/VeiGoBot.cpp.o: ../Classes/Players/VeiGoBot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Players/VeiGoBot.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Players/VeiGoBot.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Players/VeiGoBot.cpp"

CMakeFiles/Connect_Four.dir/Classes/Players/VeiGoBot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Players/VeiGoBot.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Players/VeiGoBot.cpp" > CMakeFiles/Connect_Four.dir/Classes/Players/VeiGoBot.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Players/VeiGoBot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Players/VeiGoBot.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Players/VeiGoBot.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Players/VeiGoBot.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Managers/MenuScroller.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Managers/MenuScroller.cpp.o: ../Classes/Managers/MenuScroller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Managers/MenuScroller.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Managers/MenuScroller.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Managers/MenuScroller.cpp"

CMakeFiles/Connect_Four.dir/Classes/Managers/MenuScroller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Managers/MenuScroller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Managers/MenuScroller.cpp" > CMakeFiles/Connect_Four.dir/Classes/Managers/MenuScroller.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Managers/MenuScroller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Managers/MenuScroller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Managers/MenuScroller.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Managers/MenuScroller.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Screens/MainMenu.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Screens/MainMenu.cpp.o: ../Classes/Screens/MainMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Screens/MainMenu.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Screens/MainMenu.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Screens/MainMenu.cpp"

CMakeFiles/Connect_Four.dir/Classes/Screens/MainMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Screens/MainMenu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Screens/MainMenu.cpp" > CMakeFiles/Connect_Four.dir/Classes/Screens/MainMenu.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Screens/MainMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Screens/MainMenu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Screens/MainMenu.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Screens/MainMenu.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Managers/GameManager.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Managers/GameManager.cpp.o: ../Classes/Managers/GameManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Managers/GameManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Managers/GameManager.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Managers/GameManager.cpp"

CMakeFiles/Connect_Four.dir/Classes/Managers/GameManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Managers/GameManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Managers/GameManager.cpp" > CMakeFiles/Connect_Four.dir/Classes/Managers/GameManager.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Managers/GameManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Managers/GameManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Managers/GameManager.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Managers/GameManager.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Screens/GameBoard.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Screens/GameBoard.cpp.o: ../Classes/Screens/GameBoard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Screens/GameBoard.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Screens/GameBoard.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Screens/GameBoard.cpp"

CMakeFiles/Connect_Four.dir/Classes/Screens/GameBoard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Screens/GameBoard.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Screens/GameBoard.cpp" > CMakeFiles/Connect_Four.dir/Classes/Screens/GameBoard.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Screens/GameBoard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Screens/GameBoard.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Screens/GameBoard.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Screens/GameBoard.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Screens/GameType.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Screens/GameType.cpp.o: ../Classes/Screens/GameType.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Screens/GameType.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Screens/GameType.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Screens/GameType.cpp"

CMakeFiles/Connect_Four.dir/Classes/Screens/GameType.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Screens/GameType.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Screens/GameType.cpp" > CMakeFiles/Connect_Four.dir/Classes/Screens/GameType.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Screens/GameType.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Screens/GameType.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Screens/GameType.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Screens/GameType.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Functionalities/TextField.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Functionalities/TextField.cpp.o: ../Classes/Functionalities/TextField.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Functionalities/TextField.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Functionalities/TextField.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Functionalities/TextField.cpp"

CMakeFiles/Connect_Four.dir/Classes/Functionalities/TextField.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Functionalities/TextField.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Functionalities/TextField.cpp" > CMakeFiles/Connect_Four.dir/Classes/Functionalities/TextField.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Functionalities/TextField.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Functionalities/TextField.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Functionalities/TextField.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Functionalities/TextField.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Screens/OnePlayer.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Screens/OnePlayer.cpp.o: ../Classes/Screens/OnePlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Screens/OnePlayer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Screens/OnePlayer.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Screens/OnePlayer.cpp"

CMakeFiles/Connect_Four.dir/Classes/Screens/OnePlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Screens/OnePlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Screens/OnePlayer.cpp" > CMakeFiles/Connect_Four.dir/Classes/Screens/OnePlayer.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Screens/OnePlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Screens/OnePlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Screens/OnePlayer.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Screens/OnePlayer.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Screens/TwoPlayer.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Screens/TwoPlayer.cpp.o: ../Classes/Screens/TwoPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Screens/TwoPlayer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Screens/TwoPlayer.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Screens/TwoPlayer.cpp"

CMakeFiles/Connect_Four.dir/Classes/Screens/TwoPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Screens/TwoPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Screens/TwoPlayer.cpp" > CMakeFiles/Connect_Four.dir/Classes/Screens/TwoPlayer.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Screens/TwoPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Screens/TwoPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Screens/TwoPlayer.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Screens/TwoPlayer.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Managers/MenuTextFieldScroller.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Managers/MenuTextFieldScroller.cpp.o: ../Classes/Managers/MenuTextFieldScroller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Managers/MenuTextFieldScroller.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Managers/MenuTextFieldScroller.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Managers/MenuTextFieldScroller.cpp"

CMakeFiles/Connect_Four.dir/Classes/Managers/MenuTextFieldScroller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Managers/MenuTextFieldScroller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Managers/MenuTextFieldScroller.cpp" > CMakeFiles/Connect_Four.dir/Classes/Managers/MenuTextFieldScroller.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Managers/MenuTextFieldScroller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Managers/MenuTextFieldScroller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Managers/MenuTextFieldScroller.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Managers/MenuTextFieldScroller.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Functionalities/ConnectFourStructure.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Functionalities/ConnectFourStructure.cpp.o: ../Classes/Functionalities/ConnectFourStructure.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Functionalities/ConnectFourStructure.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Functionalities/ConnectFourStructure.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Functionalities/ConnectFourStructure.cpp"

CMakeFiles/Connect_Four.dir/Classes/Functionalities/ConnectFourStructure.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Functionalities/ConnectFourStructure.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Functionalities/ConnectFourStructure.cpp" > CMakeFiles/Connect_Four.dir/Classes/Functionalities/ConnectFourStructure.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Functionalities/ConnectFourStructure.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Functionalities/ConnectFourStructure.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Functionalities/ConnectFourStructure.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Functionalities/ConnectFourStructure.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Players/Judge.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Players/Judge.cpp.o: ../Classes/Players/Judge.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Players/Judge.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Players/Judge.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Players/Judge.cpp"

CMakeFiles/Connect_Four.dir/Classes/Players/Judge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Players/Judge.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Players/Judge.cpp" > CMakeFiles/Connect_Four.dir/Classes/Players/Judge.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Players/Judge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Players/Judge.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Players/Judge.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Players/Judge.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Functionalities/SharedPointer.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Functionalities/SharedPointer.cpp.o: ../Classes/Functionalities/SharedPointer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Functionalities/SharedPointer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Functionalities/SharedPointer.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Functionalities/SharedPointer.cpp"

CMakeFiles/Connect_Four.dir/Classes/Functionalities/SharedPointer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Functionalities/SharedPointer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Functionalities/SharedPointer.cpp" > CMakeFiles/Connect_Four.dir/Classes/Functionalities/SharedPointer.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Functionalities/SharedPointer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Functionalities/SharedPointer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Functionalities/SharedPointer.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Functionalities/SharedPointer.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array1D.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array1D.cpp.o: ../Classes/Functionalities/Array1D.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array1D.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array1D.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Functionalities/Array1D.cpp"

CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array1D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array1D.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Functionalities/Array1D.cpp" > CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array1D.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array1D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array1D.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Functionalities/Array1D.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array1D.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array2D.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array2D.cpp.o: ../Classes/Functionalities/Array2D.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array2D.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array2D.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Functionalities/Array2D.cpp"

CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array2D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array2D.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Functionalities/Array2D.cpp" > CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array2D.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array2D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array2D.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Functionalities/Array2D.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array2D.cpp.s

# Object files for target Connect_Four
Connect_Four_OBJECTS = \
"CMakeFiles/Connect_Four.dir/main.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Managers/GameBoardManager.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Players/Player.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Players/VeiGoBot.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Managers/MenuScroller.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Screens/MainMenu.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Managers/GameManager.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Screens/GameBoard.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Screens/GameType.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Functionalities/TextField.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Screens/OnePlayer.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Screens/TwoPlayer.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Managers/MenuTextFieldScroller.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Functionalities/ConnectFourStructure.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Players/Judge.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Functionalities/SharedPointer.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array1D.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array2D.cpp.o"

# External object files for target Connect_Four
Connect_Four_EXTERNAL_OBJECTS =

Connect_Four: CMakeFiles/Connect_Four.dir/main.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Managers/GameBoardManager.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Players/Player.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Players/VeiGoBot.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Managers/MenuScroller.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Screens/MainMenu.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Managers/GameManager.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Screens/GameBoard.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Screens/GameType.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Functionalities/TextField.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Screens/OnePlayer.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Screens/TwoPlayer.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Managers/MenuTextFieldScroller.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Functionalities/ConnectFourStructure.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Players/Judge.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Functionalities/SharedPointer.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array1D.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Functionalities/Array2D.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/build.make
Connect_Four: /usr/lib/libsfml-graphics.so.2.5.1
Connect_Four: /usr/lib/libsfml-network.so.2.5.1
Connect_Four: /usr/lib/libsfml-audio.so.2.5.1
Connect_Four: /usr/lib/libsfml-window.so.2.5.1
Connect_Four: /usr/lib/libsfml-system.so.2.5.1
Connect_Four: CMakeFiles/Connect_Four.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_19) "Linking CXX executable Connect_Four"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Connect_Four.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Connect_Four.dir/build: Connect_Four

.PHONY : CMakeFiles/Connect_Four.dir/build

CMakeFiles/Connect_Four.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Connect_Four.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Connect_Four.dir/clean

CMakeFiles/Connect_Four.dir/depend:
	cd "/home/kirlos/CLionProjects/Connect Four/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/kirlos/CLionProjects/Connect Four" "/home/kirlos/CLionProjects/Connect Four" "/home/kirlos/CLionProjects/Connect Four/cmake-build-debug" "/home/kirlos/CLionProjects/Connect Four/cmake-build-debug" "/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles/Connect_Four.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Connect_Four.dir/depend

