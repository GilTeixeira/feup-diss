// Base class
class AccessTestAux {
	  public:
	int age = 0;

};

class AccessTest {
	AccessTestAux ata;
	AccessTest * at;
	 
  public:
  	int age = 0;
    int accessTest() {
    		AccessTestAux atal;
    		return age + ata.age + at->age + atal.age;
    
  }
};