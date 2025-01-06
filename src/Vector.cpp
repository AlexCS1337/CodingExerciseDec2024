/* Vectors */

// Vectors are similar to arrays used to store multiple elements of the same data type. 
// The difference is that vectors are able to grow or srink in size as needed.
//
// Advantages: Fast access (constant time) to elements, efficient for random access.
// Disadvantages: Inserting or deleting elements (except at the end) is slow.
// Use case: When you need a dynamic array with random access.
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(6); // Used to add an element to the end of a vector
    for (int i : v) {
        std::cout << i << " ";
    }
    return 0;
}
