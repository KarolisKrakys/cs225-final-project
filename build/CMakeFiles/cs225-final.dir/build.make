# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/shikhar/Desktop/cs225-final-project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/shikhar/Desktop/cs225-final-project/build

# Include any dependencies generated for this target.
include CMakeFiles/cs225-final.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cs225-final.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cs225-final.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cs225-final.dir/flags.make

CMakeFiles/cs225-final.dir/main.cpp.o: CMakeFiles/cs225-final.dir/flags.make
CMakeFiles/cs225-final.dir/main.cpp.o: ../main.cpp
CMakeFiles/cs225-final.dir/main.cpp.o: CMakeFiles/cs225-final.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shikhar/Desktop/cs225-final-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cs225-final.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cs225-final.dir/main.cpp.o -MF CMakeFiles/cs225-final.dir/main.cpp.o.d -o CMakeFiles/cs225-final.dir/main.cpp.o -c /Users/shikhar/Desktop/cs225-final-project/main.cpp

CMakeFiles/cs225-final.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cs225-final.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shikhar/Desktop/cs225-final-project/main.cpp > CMakeFiles/cs225-final.dir/main.cpp.i

CMakeFiles/cs225-final.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cs225-final.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shikhar/Desktop/cs225-final-project/main.cpp -o CMakeFiles/cs225-final.dir/main.cpp.s

CMakeFiles/cs225-final.dir/graph.cpp.o: CMakeFiles/cs225-final.dir/flags.make
CMakeFiles/cs225-final.dir/graph.cpp.o: ../graph.cpp
CMakeFiles/cs225-final.dir/graph.cpp.o: CMakeFiles/cs225-final.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shikhar/Desktop/cs225-final-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cs225-final.dir/graph.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cs225-final.dir/graph.cpp.o -MF CMakeFiles/cs225-final.dir/graph.cpp.o.d -o CMakeFiles/cs225-final.dir/graph.cpp.o -c /Users/shikhar/Desktop/cs225-final-project/graph.cpp

CMakeFiles/cs225-final.dir/graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cs225-final.dir/graph.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shikhar/Desktop/cs225-final-project/graph.cpp > CMakeFiles/cs225-final.dir/graph.cpp.i

CMakeFiles/cs225-final.dir/graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cs225-final.dir/graph.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shikhar/Desktop/cs225-final-project/graph.cpp -o CMakeFiles/cs225-final.dir/graph.cpp.s

CMakeFiles/cs225-final.dir/tests.cpp.o: CMakeFiles/cs225-final.dir/flags.make
CMakeFiles/cs225-final.dir/tests.cpp.o: ../tests.cpp
CMakeFiles/cs225-final.dir/tests.cpp.o: CMakeFiles/cs225-final.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shikhar/Desktop/cs225-final-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cs225-final.dir/tests.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cs225-final.dir/tests.cpp.o -MF CMakeFiles/cs225-final.dir/tests.cpp.o.d -o CMakeFiles/cs225-final.dir/tests.cpp.o -c /Users/shikhar/Desktop/cs225-final-project/tests.cpp

CMakeFiles/cs225-final.dir/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cs225-final.dir/tests.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shikhar/Desktop/cs225-final-project/tests.cpp > CMakeFiles/cs225-final.dir/tests.cpp.i

CMakeFiles/cs225-final.dir/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cs225-final.dir/tests.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shikhar/Desktop/cs225-final-project/tests.cpp -o CMakeFiles/cs225-final.dir/tests.cpp.s

# Object files for target cs225-final
cs225__final_OBJECTS = \
"CMakeFiles/cs225-final.dir/main.cpp.o" \
"CMakeFiles/cs225-final.dir/graph.cpp.o" \
"CMakeFiles/cs225-final.dir/tests.cpp.o"

# External object files for target cs225-final
cs225__final_EXTERNAL_OBJECTS =

cs225-final: CMakeFiles/cs225-final.dir/main.cpp.o
cs225-final: CMakeFiles/cs225-final.dir/graph.cpp.o
cs225-final: CMakeFiles/cs225-final.dir/tests.cpp.o
cs225-final: CMakeFiles/cs225-final.dir/build.make
cs225-final: CMakeFiles/cs225-final.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/shikhar/Desktop/cs225-final-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable cs225-final"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cs225-final.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cs225-final.dir/build: cs225-final
.PHONY : CMakeFiles/cs225-final.dir/build

CMakeFiles/cs225-final.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cs225-final.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cs225-final.dir/clean

CMakeFiles/cs225-final.dir/depend:
	cd /Users/shikhar/Desktop/cs225-final-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/shikhar/Desktop/cs225-final-project /Users/shikhar/Desktop/cs225-final-project /Users/shikhar/Desktop/cs225-final-project/build /Users/shikhar/Desktop/cs225-final-project/build /Users/shikhar/Desktop/cs225-final-project/build/CMakeFiles/cs225-final.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cs225-final.dir/depend
