/* Demonstrating Shared Resource Locking */

// To avoid issues like race conditions, we can use mutexes to ensure that only one thread accesses the shared resource at a time.
//
#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex mtx; // Mutex for critical section
int sharedResource = 0;

void increment() {
    for (int i = 0; i < 5; ++i) {
        std::lock_guard<std::mutex> lock(mtx); // Locking the mutex
        ++sharedResource;
        std::cout << "Incrementing: " << sharedResource << "\n";
    }
}

void decrement() {
    for (int i = 0; i < 5; ++i) {
        std::lock_guard<std::mutex> lock(mtx); // Locking the mutex
        --sharedResource;
        std::cout << "Decrementing: " << sharedResource << "\n";
    }
}

int main() {
    auto startTime = std::chrono::high_resolution_clock::now();
    // Creating threads
    std::thread t1(increment);
    std::thread t2(decrement);

    // Joining threads to the main thread
    t1.join();
    t2.join();

    auto stopTime = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stopTime - startTime);
    std::cout << "Execution time: " << duration.count() << " microseconds" << "\n";

    return 0;
}
