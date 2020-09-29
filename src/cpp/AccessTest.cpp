
// Base class

#include <utility> 
#include <stdlib.h>

struct Employee
{
    short id;
    int age;
    double wage;
};

template <class T>
class MyPair {
    T values [2];
  public:
    MyPair (T first, T second)
    {
      //values[0]=first; values[1]=second;
    }
};

template <class T,class T2>
class MyPair2 {
    T a;
    T2 b;
  
};


class AccessTestAux {
	  public:
	int age = 0;

	int ra(){
		return 0;
	}

	int getAge(){
		return age;	
	}

	int getAgePlus(int plus){
		return getAge() + plus;	
	}

};

class AccessTest {
	AccessTestAux ata;
	AccessTest * at;

	AccessTestAux atas[5];
	AccessTestAux atass[3][3][4];
	AccessTest ** atts;
	Employee e;

	// Number of methods increase with this uncommented
	//std::pair <int, char> pair1; 

	char * buffer = (char*) malloc (5);

	MyPair<AccessTestAux> myobject;
	MyPair<MyPair<AccessTestAux>> myobject2;

	MyPair2<int,AccessTestAux> myobject3;
	MyPair2<AccessTestAux,int> myobject4;
	MyPair2<char,int> myobject5;
	 
  public:
  	int age = 0;
    int accessTest() {
    		AccessTestAux atal;
    		return age + ata.age + at->age + atal.age + atal.getAge() + atal.age +  atal.age;
    
  }

};