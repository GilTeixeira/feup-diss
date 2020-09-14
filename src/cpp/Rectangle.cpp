

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area() {return width*height;}
};

void Rectangle::set_values (int x, int y) {
	if(x < 0)
		return;

	char grade = 'D';

   switch(grade) {
      case 'A' :
        x++;
         break;
      case 'B' :
      x++;
      case 'C' :
       x++;
         break;
      case 'D' :
         x++;
         break;
      case 'F' :
        x++;
         break;
      default :
        x++;
   }

   for( int a = 10; a < 20; a = a + 1 ) {
      a++;
   }

    int a = 10;
   while( a < 20 ) {

      a++;
   }

   do {
  
      a = a + 1;
   }while( a < 20 );
  width = x;
  height = y;
}

int func ()
{
	int a = 1;
	switch (a) {
  case 1:
    a++;
    break;
  case 2:
    a--;
    break;
    }

  return true || (false && true);
}