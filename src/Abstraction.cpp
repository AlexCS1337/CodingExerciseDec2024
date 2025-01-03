/* Abstraction */

// There are two common types of Abstraction which are Data Abstraction and
// Control Abstraction, where both are used to hide information that is not
// needed to be known when using a method or class. Data Abstraction shows only
// important information about data and hides unecessary information from the
// user's perspective. Control Abstraction hides code details and provides code
// blocks or functions to use in an application.
#include <iostream>

class Shape {
public:
    // Pure virtual function providing interface framework.
    virtual void draw() = 0; 
};

class Sphere : public Shape {
public:
    void draw() override {
      std::cout << "Drawing a Sphere\n"; // The actual functionality is hidden from viewer
    }
};

int main() {
    Shape* shape = new Sphere();
    shape->draw();
    delete shape;
    return 0;
}
