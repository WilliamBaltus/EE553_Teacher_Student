# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\wbalt\Documents\GitHub\EE553_Teacher_Student

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\wbalt\Documents\GitHub\EE553_Teacher_Student\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Teacher_Student_Project.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Teacher_Student_Project.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Teacher_Student_Project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Teacher_Student_Project.dir/flags.make

CMakeFiles/Teacher_Student_Project.dir/main.cpp.obj: CMakeFiles/Teacher_Student_Project.dir/flags.make
CMakeFiles/Teacher_Student_Project.dir/main.cpp.obj: ../main.cpp
CMakeFiles/Teacher_Student_Project.dir/main.cpp.obj: CMakeFiles/Teacher_Student_Project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\wbalt\Documents\GitHub\EE553_Teacher_Student\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Teacher_Student_Project.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Teacher_Student_Project.dir/main.cpp.obj -MF CMakeFiles\Teacher_Student_Project.dir\main.cpp.obj.d -o CMakeFiles\Teacher_Student_Project.dir\main.cpp.obj -c C:\Users\wbalt\Documents\GitHub\EE553_Teacher_Student\main.cpp

CMakeFiles/Teacher_Student_Project.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Teacher_Student_Project.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\wbalt\Documents\GitHub\EE553_Teacher_Student\main.cpp > CMakeFiles\Teacher_Student_Project.dir\main.cpp.i

CMakeFiles/Teacher_Student_Project.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Teacher_Student_Project.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\wbalt\Documents\GitHub\EE553_Teacher_Student\main.cpp -o CMakeFiles\Teacher_Student_Project.dir\main.cpp.s

# Object files for target Teacher_Student_Project
Teacher_Student_Project_OBJECTS = \
"CMakeFiles/Teacher_Student_Project.dir/main.cpp.obj"

# External object files for target Teacher_Student_Project
Teacher_Student_Project_EXTERNAL_OBJECTS =

Teacher_Student_Project.exe: CMakeFiles/Teacher_Student_Project.dir/main.cpp.obj
Teacher_Student_Project.exe: CMakeFiles/Teacher_Student_Project.dir/build.make
Teacher_Student_Project.exe: CMakeFiles/Teacher_Student_Project.dir/linklibs.rsp
Teacher_Student_Project.exe: CMakeFiles/Teacher_Student_Project.dir/objects1.rsp
Teacher_Student_Project.exe: CMakeFiles/Teacher_Student_Project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\wbalt\Documents\GitHub\EE553_Teacher_Student\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Teacher_Student_Project.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Teacher_Student_Project.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Teacher_Student_Project.dir/build: Teacher_Student_Project.exe
.PHONY : CMakeFiles/Teacher_Student_Project.dir/build

CMakeFiles/Teacher_Student_Project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Teacher_Student_Project.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Teacher_Student_Project.dir/clean

CMakeFiles/Teacher_Student_Project.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\wbalt\Documents\GitHub\EE553_Teacher_Student C:\Users\wbalt\Documents\GitHub\EE553_Teacher_Student C:\Users\wbalt\Documents\GitHub\EE553_Teacher_Student\cmake-build-debug C:\Users\wbalt\Documents\GitHub\EE553_Teacher_Student\cmake-build-debug C:\Users\wbalt\Documents\GitHub\EE553_Teacher_Student\cmake-build-debug\CMakeFiles\Teacher_Student_Project.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Teacher_Student_Project.dir/depend
