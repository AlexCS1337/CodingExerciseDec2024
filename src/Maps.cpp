/* Maps */

// A map stores key-value pairs with unique keys
// Elements in a map are accessable by keys and not index where each key is unique. And they are automatically sorted in ascending order by their keys.
// Advantages: Fast search, insertion, and deletion (logarithmic time).
// Disadvantages: Requires more memory due to tree structure.
// Use case: When you need to store key-value pairs with unique keys.
#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> people = { {"Rick", 69}, {"James", 25}, {"Chuck", 200} };
    for (auto person : people) {
        std::cout << person.first << " is: " << person.second << "\n";
    }
    return 0;
}
