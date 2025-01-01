/* Inheritance */

// Inheritance allows a class to reuse atributes and functions from another
// class. You can make a child class which inherits from a parent class and also
// a grandchild class that inherits from the child class.

#include <iostream>
using std::cout;

// Base class
class Animal {
public:
  void eat() {
    cout << "The animal is eating. mogu mogu (○ ^ω^)_旦~~♪" << '\n';
  }
};

// Derived class (child)
class Cat : public Animal {
public:
  void meow() { cout << "The cat is meowing. Nyannn ₍^. .^₎⟆" << '\n'; }
};

// Derived class (grandchild)
class Kitten : public Cat {
public:
  void cry() {
    cout << "The kitten is crying for their mother. ≽^╥⩊╥^≼" << '\n';
  }
};

int main() {
  Cat nekochan;
  nekochan.eat(); // Inherited function
  nekochan.meow();
  Kitten konekochan;
  konekochan.eat();  // Inherited function
  konekochan.meow(); // Inherited function
  konekochan.cry();
  return 0;
}
