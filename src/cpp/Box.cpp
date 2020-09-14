#include "Animal.cpp"

class Box {
   public:
      double length;         // Length of a box
      double breadth;        // Breadth of a box
      double height;         // Height of a box

      // Member functions declaration
      double getVolume(void);
      void setLength( double len );
      void setBreadth( double bre );
      void setHeight( double hei );
};

// Member functions definitions
double Box::getVolume(void) {
   return length * breadth * height;
}

int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}


void Box::setLength( double len ) {
   getVolume();
   getVolume();
   getVolume();

   Animal myAnimal;

   myAnimal.animalSound();
   
   length = len;
}
void Box::setBreadth( double bre ) {
   Pig myAnimal;

   myAnimal.animalSound();
   breadth = bre;
}
void Box::setHeight( double hei ) {
   height = hei;
   int z;
  z = addition (5,3);
}

