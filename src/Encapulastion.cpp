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

  // EG: I would normally make Getters const i.e. to avoid side effects i.e. as shown
  // Getters
  int getRiches() const { return riches; }
  string getName() const { return name; }
};

int main() {
  Villager edward;
  edward.setName("Edward");
  edward.setRiches(666);
  std::cout << "The Villager " << edward.getName() << " has "
            << edward.getRiches() << "GP";
  return 0;
}
