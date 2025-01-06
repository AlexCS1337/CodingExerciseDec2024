/* Threading */

// Threading allows a program to perform multiple operations simultaneously, which can significantly improve performance and responsiveness. 
// This is useful in applications where tasks can be performed in parallel, such as in server applications handling multiple client requests, 
// real-time processing, or other computing intensive tasks.
//
#include <iostream>
#include <thread>
#include <chrono>

// Declarations
void printLetters();
void printNumbers();

int main() {
    auto startTime = std::chrono::high_resolution_clock::now();
    // Creating threads
    std::thread t1(printNumbers);
    std::thread t2(printLetters);

    // Joining threads to the main thread
    t1.join();
    t2.join();

    auto stopTime = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stopTime - startTime);
    std::cout << "Execution time: " << duration.count() << " microseconds" << "\n";

    return 0;
}
// Function to print letters
void printLetters() {
    for (char c = 'A'; c <= 'E'; ++c) {
        std::cout << c << " ";
    }
}

// Function to print numbers
void printNumbers() {
    for (int i = 1; i <= 5; ++i) {
        std::cout << i << " ";
    }
}
