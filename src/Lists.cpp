/* Lists */

// Lists are similar to vectors which can store elements of the same type and can dynamically grow in size.  
// The difference is that lists can add have elements added to the beginning and end whereas with vectors elements are usually can be added or removed at the end.
//
// Advantages: Efficient insertion and deletion at any position (constant time).
// Disadvantages: Slow random access (linear time).
// Use case: When you need frequent insertions and deletions.
//
#include <iostream>
#include <list>

int main() {
    std::list<std::string> cars = {"Ferrari", "Toyoto", "Mazda", "Chevrolet", "Hyundai"};
    cars.push_front("Holden");
    cars.push_back("BMW");
    for (std::string car : cars) {
        std::cout << car << " ";
    }
    return 0;
}
