cmake_minimum_required(VERSION 3.17)
project(DiscordBot)

set(CMAKE_CXX_STANDARD 14)
add_executable(DiscordBot main.cpp)

# Sleepy Discord
add_subdirectory(lib/sleepy-discord)
target_link_libraries(DiscordBot sleepy-discord)
