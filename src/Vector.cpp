#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(6);
    for (int i : v) {
        std::cout << i << " ";
    }
    return 0;
}
