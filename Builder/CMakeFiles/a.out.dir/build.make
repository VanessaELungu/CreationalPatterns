# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder

# Include any dependencies generated for this target.
include CMakeFiles/a.out.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/a.out.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a.out.dir/flags.make

CMakeFiles/a.out.dir/src/Car.cpp.o: CMakeFiles/a.out.dir/flags.make
CMakeFiles/a.out.dir/src/Car.cpp.o: src/Car.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/a.out.dir/src/Car.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.dir/src/Car.cpp.o -c /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/src/Car.cpp

CMakeFiles/a.out.dir/src/Car.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.dir/src/Car.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/src/Car.cpp > CMakeFiles/a.out.dir/src/Car.cpp.i

CMakeFiles/a.out.dir/src/Car.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.dir/src/Car.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/src/Car.cpp -o CMakeFiles/a.out.dir/src/Car.cpp.s

CMakeFiles/a.out.dir/src/Director.cpp.o: CMakeFiles/a.out.dir/flags.make
CMakeFiles/a.out.dir/src/Director.cpp.o: src/Director.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/a.out.dir/src/Director.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.dir/src/Director.cpp.o -c /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/src/Director.cpp

CMakeFiles/a.out.dir/src/Director.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.dir/src/Director.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/src/Director.cpp > CMakeFiles/a.out.dir/src/Director.cpp.i

CMakeFiles/a.out.dir/src/Director.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.dir/src/Director.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/src/Director.cpp -o CMakeFiles/a.out.dir/src/Director.cpp.s

CMakeFiles/a.out.dir/src/Ford.cpp.o: CMakeFiles/a.out.dir/flags.make
CMakeFiles/a.out.dir/src/Ford.cpp.o: src/Ford.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/a.out.dir/src/Ford.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.dir/src/Ford.cpp.o -c /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/src/Ford.cpp

CMakeFiles/a.out.dir/src/Ford.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.dir/src/Ford.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/src/Ford.cpp > CMakeFiles/a.out.dir/src/Ford.cpp.i

CMakeFiles/a.out.dir/src/Ford.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.dir/src/Ford.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/src/Ford.cpp -o CMakeFiles/a.out.dir/src/Ford.cpp.s

CMakeFiles/a.out.dir/src/Maserati.cpp.o: CMakeFiles/a.out.dir/flags.make
CMakeFiles/a.out.dir/src/Maserati.cpp.o: src/Maserati.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/a.out.dir/src/Maserati.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.dir/src/Maserati.cpp.o -c /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/src/Maserati.cpp

CMakeFiles/a.out.dir/src/Maserati.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.dir/src/Maserati.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/src/Maserati.cpp > CMakeFiles/a.out.dir/src/Maserati.cpp.i

CMakeFiles/a.out.dir/src/Maserati.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.dir/src/Maserati.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/src/Maserati.cpp -o CMakeFiles/a.out.dir/src/Maserati.cpp.s

CMakeFiles/a.out.dir/main/Main.cpp.o: CMakeFiles/a.out.dir/flags.make
CMakeFiles/a.out.dir/main/Main.cpp.o: main/Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/a.out.dir/main/Main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.out.dir/main/Main.cpp.o -c /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/main/Main.cpp

CMakeFiles/a.out.dir/main/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.out.dir/main/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/main/Main.cpp > CMakeFiles/a.out.dir/main/Main.cpp.i

CMakeFiles/a.out.dir/main/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.out.dir/main/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/main/Main.cpp -o CMakeFiles/a.out.dir/main/Main.cpp.s

# Object files for target a.out
a_out_OBJECTS = \
"CMakeFiles/a.out.dir/src/Car.cpp.o" \
"CMakeFiles/a.out.dir/src/Director.cpp.o" \
"CMakeFiles/a.out.dir/src/Ford.cpp.o" \
"CMakeFiles/a.out.dir/src/Maserati.cpp.o" \
"CMakeFiles/a.out.dir/main/Main.cpp.o"

# External object files for target a.out
a_out_EXTERNAL_OBJECTS =

a.out: CMakeFiles/a.out.dir/src/Car.cpp.o
a.out: CMakeFiles/a.out.dir/src/Director.cpp.o
a.out: CMakeFiles/a.out.dir/src/Ford.cpp.o
a.out: CMakeFiles/a.out.dir/src/Maserati.cpp.o
a.out: CMakeFiles/a.out.dir/main/Main.cpp.o
a.out: CMakeFiles/a.out.dir/build.make
a.out: CMakeFiles/a.out.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable a.out"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/a.out.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a.out.dir/build: a.out

.PHONY : CMakeFiles/a.out.dir/build

CMakeFiles/a.out.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/a.out.dir/cmake_clean.cmake
.PHONY : CMakeFiles/a.out.dir/clean

CMakeFiles/a.out.dir/depend:
	cd /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder /mnt/c/Users/vanessa.e.lungu/DesignPatterns/Builder/CMakeFiles/a.out.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/a.out.dir/depend

