/* Polymorphism */

// Polymorphism allows for methods to do different things based on the object is being used on, even if the name of the method is the same.
//
//
#include <iostream>

// Base class
class Animal {
  public:
    void animalSound() {
      std::cout << "The animal makes a sound \n";
    }
};

// Derived class
class Cat : public Animal {
  public:
    void animalSound() {
      std::cout << "The cat says: nyan nyan ₍^. .^₎⟆\n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      std::cout << "The dog says: wan wan \n";
    }
};

int main() {
  Animal generalAnimal;
  Cat neko;
  Dog inu;
  generalAnimal.animalSound();
  neko.animalSound();
  inu.animalSound();
  return 0;
}
