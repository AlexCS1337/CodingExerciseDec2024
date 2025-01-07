/* Nested Exception Handling */

// Nested exception handling allows you to handle exceptions within another `try-catch` block inside an outer `catch` block.
//
#include <iostream>
#include <stdexcept>

void funcA() {
    throw std::runtime_error("Error in funcA");
}

void funcB() {
    try {
        funcA();
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught in funcB: " << e.what() << "\n";
        throw; // Re-throwing the exception
    }
}

int main() {
    try {
        funcB();
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught in main: " << e.what() << "\n";
    }
    return 0;
}
