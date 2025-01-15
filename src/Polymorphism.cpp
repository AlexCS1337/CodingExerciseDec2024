/* Polymorphism */

// Polymorphism allows for methods to do different things based on the object is being used on, even if the name of the method is the same.
//
//
#include <iostream>

// Base class
class Animal {
  public:
    virtual void animalSound() {
      std::cout << "The animal makes a sound \n";
    }
};

// Derived class
class Cat : public Animal {
  public:
    void animalSound() override {
      std::cout << "The cat says: nyan nyan ₍^. .^₎⟆\n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() override {
      std::cout << "The dog says: wan wan \n";
    }
};

int main() {
  Animal* neko = new Cat();
  Animal* inu = new Dog();
  neko->animalSound();
  delete neko;
  inu->animalSound();
  delete inu;
  return 0;
}

// EG: This would be better demonstrated by making animalSound virtual and *overriding* in the derived classes.
// Then dynamically creating specific animals of Animal type and demonstrating that appropriate derived class function is called via run-time binding i.e.
//
// Animal* inu = new Dog();
// inu->animalSound();  // output: The dog says: wan wan
// delete inu;

