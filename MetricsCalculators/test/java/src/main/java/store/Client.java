package store;

public class Client extends Person {
	Date signUpDate;
	double totalAmount;

	public Client(int id, String name, Date date, double totalAmount) {
		super(id, name);
		this.signUpDate = date;
		this.totalAmount = totalAmount;
	}

	public double getTotalAmount() {
		return totalAmount;
	}

	public void setSignUpDate(Date signUpDate) {
		this.signUpDate = signUpDate;
	}

	public void addAmount(double amount) {
		this.totalAmount = this.totalAmount + amount;
	}

	public String toString() {
		String out = id + " ; " + name + " ; " + signUpDate.toString() + " ; " + totalAmount;
		return out;
	}
}
