cmake_minimum_required(VERSION 3.27)
project(MyLearningGame)

# Set C++ standard (e.g., C++17)
set(CMAKE_CXX_STANDARD 17)

# Add the executable
add_executable(MyLearningGame src/main.cpp
    src/game/game.cpp
    src/states/menu.cpp
    src/states/Lessons.cpp
    src/states/Terminal.cpp
    src/text/Delays.cpp
    src/text/Type.cpp
    src/user/User.cpp
    src/resources/colors.cpp
    src/resources/helpers.cpp
)

# You can add more source files as your project grows.

# Include directories
target_include_directories(MyLearningGame PRIVATE include)

# Link any additional libraries if needed
# target_link_libraries(MyLearningGame your_additional_libraries)
target_link_libraries(MyLearningGame ${CURSES_LIBRARIES})

# Copy data files to the build directory
file(COPY src/data/ DESTINATION ${CMAKE_BINARY_DIR}/data)

# Set the output directory for executables
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

# Optional: Set the build type (Release or Debug)
# set(CMAKE_BUILD_TYPE Release)

# Optional: Compiler-specific flags
# add_compile_options(-Wall -Wextra)

# Optional: Find and link external libraries (e.g., for JSON parsing)
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})
# find_package(YourLibrary REQUIRED)
# target_link_libraries(MyLearningGame YourLibrary)

# Optional: Install targets
# install(TARGETS MyLearningGame DESTINATION bin)
