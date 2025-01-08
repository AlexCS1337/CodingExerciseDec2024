/* Sets */

// Sets contain a sorted set of unique elements/objects.
// The elements are unique and sorted in ascending order. 
// Elements can be added or removed but values of existing elements cannot be altered.
// Because they are based on sorting and not indexing, the elements cannot be accessed by index numbers.
//
// Advantages: Fast search and insertion (logarithmic time), maintains sorted order.
// Disadvantages: Elements must be unique, more memory usage.
// Use case: When you need a sorted collection of unique elements.
//
#include <iostream>
#include <set>

//EG: I'd say same as map, however where value is also the key in this case...

int main() {
    std::set<std::string> cars = {"Ferrari", "Toyoto", "Mazda"};
    cars.insert("Hyundai");
    for (std::string car : cars) {
        std::cout << car << " ";
    }
    return 0;
}
