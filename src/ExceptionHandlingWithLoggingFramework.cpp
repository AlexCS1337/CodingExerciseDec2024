// Exception Handling example using spdlog
// Outputs error data etc to a log text file

#include <iostream>
#include <stdexcept>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>

void initLogger() {
    auto file_logger = spdlog::basic_logger_mt("basic_logger", "logs.txt");
    spdlog::set_default_logger(file_logger);
    spdlog::set_level(spdlog::level::info); // Set global log level to info
}

void funcA() {
    spdlog::info("Entering funcA");
    throw std::runtime_error("Error in funcA");
}

void funcB() {
    try { 
        spdlog::info("Entering funcB");
        funcA();
    } catch (const std::runtime_error& e) {
        spdlog::error("Caught in funcB: {}", e.what());
        throw; // Re-throwing the exception
    }
}

int main() {
    initLogger();
    try {
        spdlog::info("Starting main");
        funcB();
    } catch (const std::runtime_error& e) {
        spdlog::error("Caught in main: {}", e.what());
    }
    spdlog::info("Ending main");
    return 0;
}
