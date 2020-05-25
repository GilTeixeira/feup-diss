#include <iostream>

// Base class
class Animal {
  public:
    void animalSound() {
    std::cout << "The animal makes a sound " << std::endl;
  }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
    std::cout << "The pig says: wee wee " << std::endl;
   }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
    std::cout << "The dog says: bow wow " << std::endl;
  }
};
