#include <iostream>

#include "animal.cpp"
#include "box.cpp"
#include "rectangle.cpp"

int main () {
  Rectangle rect;
  rect.set_values (3,4);
  std::cout << "area: " << rect.area() << std::endl << std::endl;
  //return 0;

   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);

   // box 2 specification
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);

   // volume of box 1
   volume = Box1.getVolume();
   std::cout << "Volume of Box1 : " << volume << std::endl;

   // volume of box 2
   volume = Box2.getVolume();
   std::cout << "Volume of Box2 : " << volume << std::endl << std::endl;

   Animal myAnimal;
   Pig myPig;
   Dog myDog;

   myAnimal.animalSound();
   myPig.animalSound();
   myDog.animalSound();
   
   return 0;
}
