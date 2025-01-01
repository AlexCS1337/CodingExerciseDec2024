/* Encapsulation */

// Encapsulation brings together data and functions that modify the data and
// keeps them safe from interference and misuse.
//
#include <iostream>
using std::string;

class Villager {
private:
  // Private attributes
  string name;
  int riches;

public:
  // Setters
  void setRiches(int r) { riches = r; }
  void setName(string n) { name = n; }
  // Getters
  int getRiches() { return riches; }
  string getName() { return name; }
};

int main() {
  Villager edward;
  edward.setName("Edward");
  edward.setRiches(666);
  std::cout << "The Villager " << edward.getName() << " has "
            << edward.getRiches() << "GP";
  return 0;
}
