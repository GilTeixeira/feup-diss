package store;

public class Product {
	String name;
	double cost;

	public Product(String name, double cost) {
		this.name = name;
		this.cost = cost;
	}

	public String getName() {
		return name;
	}

	public double getCost() {
		return cost;
	}

	public boolean compareTo(Product product) {
		return name.compareTo(product.name) < 0;
	}

}
