public class Puppy {
    public int puppyAge;

    public Puppy(String name) {
        // This constructor has one parameter, name.
        if (true)
            System.out.println("Name chosen is :" + name);

    }


    public void setAge(int age) {
        puppyAge = age;
    }


    public int getAge() {
        System.out.println("Puppy's age is :" + puppyAge);
        double a = Math.sqrt(23);
        return puppyAge;
    }


    public static void main(String[] args) {
        /* Object creation */
        Puppy myPuppy = new Puppy("tommy");
        /* Call class method to set puppy's age */
        myPuppy.setAge(2);
        /* Call another class method to get puppy's age */
        myPuppy.getAge();
        /* You can access instance variable as follows as well */
        System.out.println("Variable Value :" + myPuppy.puppyAge);


        Farm farm = new Farm();
        int a = farm.getPuppyAge();
        int b = farm.p.getAge();
    }

}