
public class Farm {
    Puppy p = new Puppy("tommy");

    int a;

    

    int getPuppyAge() {
        return p.getAge() + p.puppyAge +  p.puppyAge;
    }

	Puppy[] getPuppyArr() {
        return new Puppy[]{p};
    }

    Puppy getPuppy() {
        return p;
    }

	    
    
    OrderedPair<Puppy, Integer>  getPair() {
        return new OrderedPair<Puppy, Integer>(p, 8);
    }

    OrderedPair<Puppy, int[]>  getPair2() {
    		Farm farm2 = new Farm();
    		int a = farm2.a;
    		//int a = 3;
    		My_Calculation demo = new My_Calculation();
    		a++;
    		a++;
    		a++;
    		int[] arr = new int[]{2};
    		a=arr[0];
        return new OrderedPair<Puppy, int[]>(p, arr);
    }    

    

}