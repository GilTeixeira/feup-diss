#include <iostream>

// Base class
class Animal {
	 
  public:
  	int age = 0;
    void animalSound() {
    std::cout << "The animal makes a sound " << std::endl;
  }
  	int getAge() { return age;}
};

// Derived class
class Pig : public Animal {
	Animal ancestor;
  public:
    void animalSound() {
    std::cout << "The pig says: wee wee " << ancestor.age << std::endl;
   }
};

// Derived class
class Dog : public Animal {
	Animal* ancestor;
  public:
    void animalSound() {
    std::cout << "The dog says: bow wow "<< ancestor->age << std::endl;
  }
};


// Derived class
class Cat : public Animal {
	Animal* ancestor;
  public:
    void animalSound() {
    std::cout << "The cat says: miau "<< ancestor->age << std::endl;
  }
};

// Derived class
class Tiger : public Animal {
  public:
    void animalSound() {
    std::cout << "The cat says: miau " << std::endl;
  }
};