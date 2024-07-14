# CMakeList.txt : CMake project for rock-paper-scissors, include source and define
# project specific logic here.
#
project(rock-paper-scissors)

# Add source to this project's executable.
include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable (rock-paper-scissors "src/main.cpp" "src/Player.cpp" "src/Opponent.cpp"  "src/RockPaperScissors.cpp")

target_include_directories(rock-paper-scissors PRIVATE ${PROJECT_SOURCE_DIR}/extern/)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET rock-paper-scissors PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
