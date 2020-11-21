package store;

import java.util.Vector;

public class Transaction {
	int clientId;
	Date date; // DD/MM/AAAAA

	Vector<String> products;

	public Transaction(int clientId, Date date, Vector<String> products) {
		this.clientId = clientId;
		this.date = date;
		this.products = products;
	}

	public int getClientId() {
		return clientId;
	}

	public Vector<String> getProducts() {
		return products;
	}

	public Date getDate() {
		return date;
	}

	public boolean compareTo(Transaction transaction) {
		return date.compareTo(transaction.date);
	}

	public String toString() {
		
		String out = clientId + " ; " + date.toString() + " ; ";
		
		for (int j = 0; j < products.size(); j++) {
			out += products.elementAt(j);
			if (j != products.size() - 1)
				out += ", ";
		}
		out += "\n";
		
		return out;
	}

}
