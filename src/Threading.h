// Threading header file for Unit Testing
// Same functionality as the ThreadingWithSRL.cpp example

#include <mutex>

std::mutex mtx; // Mutex for critical section
int sharedResource = 0;

void increment() {
    for (int i = 0; i < 5; ++i) {
        std::lock_guard<std::mutex> lock(mtx); // Locking the mutex
        ++sharedResource;
    }
}

void decrement() {
    for (int i = 0; i < 5; ++i) {
        std::lock_guard<std::mutex> lock(mtx); // Locking the mutex
        --sharedResource;
    }
}