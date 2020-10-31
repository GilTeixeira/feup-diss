class Box {
   public:
      double getVolume(void);
      double getVolume2(void);
  
};

// Member functions definitions
double Box::getVolume(void) {
	Box box;
	box.getVolume();
   return getVolume2();
}

double Box::getVolume2(void) {
   return 2.3;
}