# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
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
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/main.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/main.cpp"

CMakeFiles/Connect_Four.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/main.cpp" > CMakeFiles/Connect_Four.dir/main.cpp.i

CMakeFiles/Connect_Four.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/main.cpp" -o CMakeFiles/Connect_Four.dir/main.cpp.s

CMakeFiles/Connect_Four.dir/Classes/GUI/GameBoardManager.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/GUI/GameBoardManager.cpp.o: ../Classes/GUI/GameBoardManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/GUI/GameBoardManager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/GUI/GameBoardManager.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/GUI/GameBoardManager.cpp"

CMakeFiles/Connect_Four.dir/Classes/GUI/GameBoardManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/GUI/GameBoardManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/GUI/GameBoardManager.cpp" > CMakeFiles/Connect_Four.dir/Classes/GUI/GameBoardManager.cpp.i

CMakeFiles/Connect_Four.dir/Classes/GUI/GameBoardManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/GUI/GameBoardManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/GUI/GameBoardManager.cpp" -o CMakeFiles/Connect_Four.dir/Classes/GUI/GameBoardManager.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Player/Player.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Player/Player.cpp.o: ../Classes/Player/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Player/Player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Player/Player.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Player/Player.cpp"

CMakeFiles/Connect_Four.dir/Classes/Player/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Player/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Player/Player.cpp" > CMakeFiles/Connect_Four.dir/Classes/Player/Player.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Player/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Player/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Player/Player.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Player/Player.cpp.s

CMakeFiles/Connect_Four.dir/Classes/Player/VeiGoBot.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/Player/VeiGoBot.cpp.o: ../Classes/Player/VeiGoBot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/Player/VeiGoBot.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/Player/VeiGoBot.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/Player/VeiGoBot.cpp"

CMakeFiles/Connect_Four.dir/Classes/Player/VeiGoBot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/Player/VeiGoBot.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/Player/VeiGoBot.cpp" > CMakeFiles/Connect_Four.dir/Classes/Player/VeiGoBot.cpp.i

CMakeFiles/Connect_Four.dir/Classes/Player/VeiGoBot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/Player/VeiGoBot.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/Player/VeiGoBot.cpp" -o CMakeFiles/Connect_Four.dir/Classes/Player/VeiGoBot.cpp.s

CMakeFiles/Connect_Four.dir/Classes/GUI/MenuScroller.cpp.o: CMakeFiles/Connect_Four.dir/flags.make
CMakeFiles/Connect_Four.dir/Classes/GUI/MenuScroller.cpp.o: ../Classes/GUI/MenuScroller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Connect_Four.dir/Classes/GUI/MenuScroller.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Connect_Four.dir/Classes/GUI/MenuScroller.cpp.o -c "/home/kirlos/CLionProjects/Connect Four/Classes/GUI/MenuScroller.cpp"

CMakeFiles/Connect_Four.dir/Classes/GUI/MenuScroller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Connect_Four.dir/Classes/GUI/MenuScroller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kirlos/CLionProjects/Connect Four/Classes/GUI/MenuScroller.cpp" > CMakeFiles/Connect_Four.dir/Classes/GUI/MenuScroller.cpp.i

CMakeFiles/Connect_Four.dir/Classes/GUI/MenuScroller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Connect_Four.dir/Classes/GUI/MenuScroller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kirlos/CLionProjects/Connect Four/Classes/GUI/MenuScroller.cpp" -o CMakeFiles/Connect_Four.dir/Classes/GUI/MenuScroller.cpp.s

# Object files for target Connect_Four
Connect_Four_OBJECTS = \
"CMakeFiles/Connect_Four.dir/main.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/GUI/GameBoardManager.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Player/Player.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/Player/VeiGoBot.cpp.o" \
"CMakeFiles/Connect_Four.dir/Classes/GUI/MenuScroller.cpp.o"

# External object files for target Connect_Four
Connect_Four_EXTERNAL_OBJECTS =

Connect_Four: CMakeFiles/Connect_Four.dir/main.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/GUI/GameBoardManager.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Player/Player.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/Player/VeiGoBot.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/Classes/GUI/MenuScroller.cpp.o
Connect_Four: CMakeFiles/Connect_Four.dir/build.make
Connect_Four: /usr/lib/libsfml-graphics.so.2.5.1
Connect_Four: /usr/lib/libsfml-network.so.2.5.1
Connect_Four: /usr/lib/libsfml-audio.so.2.5.1
Connect_Four: /usr/lib/libsfml-window.so.2.5.1
Connect_Four: /usr/lib/libsfml-system.so.2.5.1
Connect_Four: CMakeFiles/Connect_Four.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/kirlos/CLionProjects/Connect Four/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Connect_Four"
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
