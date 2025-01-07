/* Exception Handling */

// Exception handling in C++ provides a way to handle runtime errors or exceptional conditions in a controlled manner.
// It uses three keywords: try, throw, and catch.

// try block: Encloses the code that might throw an exception.
// throw statement: Used to signal an exception.
// catch block: Handles the exception thrown by the throw statement.
#include <iostream>
#include <stdexcept>

int main() {
    try {
        std::cout << "Inside try block" << "\n";
        throw std::runtime_error("An error occurred");
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught a runtime_error: " << e.what() << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Caught an exception: " << e.what() << "\n";
    }
    return 0;
}
