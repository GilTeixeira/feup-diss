package store;

public class Person {

	int id;
	String name;
	
	public Person(int id, String name) {
		this.id = id;
		this.name = name;
	}
	public int getId() {
		return id;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	
	public boolean compareTo(Person person) {
		return name.compareTo(person.name) < 0;
	}

}
