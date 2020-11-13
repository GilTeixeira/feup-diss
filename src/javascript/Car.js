  	/*
  	if(x===3)
  		console.log(3);
  	else 
  		console.log(5);
  	

*/

/*
class Animal {
  constructor(name) {
    this.speed = 0;
    this.name = name;
  }
  run(speed) {
   this.stop();
  }
  stop() {
   return this.speed;
  }
}
*/
/*
function av(){
	
}

function a(v=3,b,c,f){
	var gfd;
	var gf = 3;
	gfd = 3;
	gfd = gf;
	
}

class Car {
  constructor() {
    this.speed = 0;
  }
    getSpeed() {
   return this.speed + getSpeed();
  }

    setSpeed(speed) {
    	var fd = this.speed;
	this.getSpeed();
	a(this.speed);
	a();
  }
}
*/
/*
class Car {
  constructor() {
    this.speed = 0;
  }
    getSpeed(s) {
    	var a;
    	a = 3;
    	if(a)
    	a= 5;
    	
   return a + this.speed + this.getSpeed(this.speed);
  }

}*/
class Test {

	
}
//test = new Test();

class Car {
  constructor(brand) {
    this.carname = brand;
    
    var a = 3;
    a;
        	if(a)
    	a= 5;
  }
  present() {
    return 'I have a ' + this.carname;
  }
}

class Model extends Car {
  constructor(brand, mod) {
    super(brand);
    this.model = mod;
  }
  show() {
  	var c =   	new Car();
  	
    return this.present() + ', it is a ' + this.model + c.model;
  }
}
