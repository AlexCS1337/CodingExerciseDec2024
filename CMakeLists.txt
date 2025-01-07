cmake_minimum_required(VERSION 3.10)

project(CodingExerciseDec2024)

find_package(spdlog CONFIG REQUIRED)

add_executable(CodingExerciseDec2024 src/ExceptionHandlingWithLoggingFramework.cpp)

target_link_libraries(CodingExerciseDec2024 PRIVATE spdlog::spdlog)
