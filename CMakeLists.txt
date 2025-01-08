cmake_minimum_required(VERSION 3.10)

project(CodingExerciseDec2024)

# For using Google Test Framework
include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(ThreadingUnitTests tests/ThreadingUnitTests.cpp)
target_link_libraries(ThreadingUnitTests gtest_main)
# add_test(NAME ThreadingUnitTests COMMAND ThreadingUnitTests)

# For using spdlog - Logging Framework
find_package(spdlog CONFIG REQUIRED)
add_executable(ExceptionHandlingWithLoggingFramework src/ExceptionHandlingWithLoggingFramework.cpp)
target_link_libraries(ExceptionHandlingWithLoggingFramework PRIVATE spdlog::spdlog)
