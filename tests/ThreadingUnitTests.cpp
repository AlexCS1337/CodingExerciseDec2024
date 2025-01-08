// Demonstrating Unit Tests Using Google Test Framework

#include <gtest/gtest.h>
#include <thread>
#include "../src/Threading.h"

// Include the functions to be tested
extern void increment();
extern void decrement();
extern int sharedResource;

TEST(ThreadingTest, IncrementTest) {
    sharedResource = 0; // Reset shared resource
    std::thread t1(increment);
    t1.join();
    EXPECT_EQ(sharedResource, 5);
}

TEST(ThreadingTest, DecrementTest) {
    sharedResource = 0; // Reset shared resource
    std::thread t1(decrement);
    t1.join();
    EXPECT_EQ(sharedResource, -5);
}

int man(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}