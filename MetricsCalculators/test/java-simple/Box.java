


// Derived class
public class Box extends Shape {
	
  Box(int a){
  	super(a);

	if(a>0)
  		a=3;
  	else a=3;
  
  		
  	if(a>0)
  		a=3;
  	else if(a>0)
  		a=3;
  	else {
  		if(a==4)
  		a=3;
  		else a=3;

  	}
  	
  }

 
private int overriddenSymbolFrom(Object classType) {
    if (classType == classType) { // +1    
        return 0;
    }
    boolean unknownFound = false;
   	String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
    for (String i : cars) { // +1    
        if (i=="2" // +2 (nesting = 1)
            &&
            !(i=="2")) { // +1      
            
            if (i=="2") { // +3 (nesting = 2)        
                Boolean overriding = false;
                if (overriding == null) { // +4 (nesting = 3)          
                    if (!unknownFound) { // +5 (nesting = 4)            
                        unknownFound = true;
                    }
                } else if (overriding) { // +1          
                    return 0;
                }
            }
        }
    }
    if (unknownFound) { // +1    
        return 0;
    }
    return 0;
}
}
