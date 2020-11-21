package store;

import java.util.Vector;



public class Store {

	String name;

	int lastClientId;
	Vector<Client> clients = new Vector<Client>();
	Vector<Product> products = new Vector<Product>();
	Vector<Transaction> transactions = new Vector<Transaction>();

	public Store(String name, Vector<Product> products) {
		this.name = name;
		this.products = products;
		lastClientId = 0;
	}

	public void listClients() {

		if (clients.isEmpty()) {
			System.out.print("There are no clients." + "\n");
			return;
		}

		System.out.print("\n" + "Clients:" + "\n");

		for (int i = 0; i < clients.size(); i++) {
			System.out.print(clients.elementAt(i).toString());
		}

		System.out.print("\n");
	}

	public void showClientInfo(String name) {

		for (int i = 0; i < clients.size(); i++) {
			if (clients.elementAt(i).getName().equals(name)) {
				System.out.print("\n" + "Client Info:" + "\n");
				System.out.print(clients.elementAt(i).toString());
				System.out.print("\n");
				return;
			}
		}

		System.out.print("Client does not exist.");
	}

	public void addClient(String name, Date date) {

		int clientId = lastClientId + 1;
		lastClientId = lastClientId + 1;

		double totalAmount = 0;

		Client client = new Client(clientId, name, date, totalAmount);

		clients.add(client);
	}

	public void removeClient(String name) {
		if (clients.isEmpty()) {
			System.out.print("There are no clients" + "\n");
			return;

		}

		for (int i = 0; i < clients.size(); i++) {
			if (clients.elementAt(i).getName().equals(name)) {
				clients.remove(i);
			}
		}
	}

	public void listProducts() {
		System.out.print("\n" + "Products:" + "\n");
		for (int i = 0; i < products.size(); i++)
			System.out.print(products.elementAt(i).getName() + products.elementAt(i).getCost() + "\n");

		System.out.print("\n");

	}

	public void listClientTransactions(String clientName) {
		for (int i = 0; i < clients.size(); i++) {
			if (clients.elementAt(i).getName().equals(clientName)) {

				int clientId = clients.elementAt(i).getId();

				Vector<Transaction> transactionsClient = new Vector<Transaction>();

				for (int j = 0; j < transactions.size(); j++) {
					if (transactions.elementAt(j).getClientId() == clientId)
						transactionsClient.add(transactions.elementAt(j));
				}

				if (transactionsClient.isEmpty()) {
					System.out.print("This client did not make any transaction." + "\n");
					return;
				}

				System.out.print("Transactions:" + "\n");

				for (int j = 0; j < transactionsClient.size(); j++) {
					System.out.print(transactionsClient.elementAt(j).toString() + "\n");
				}
				return;
			}

		}

		System.out.print("There isnt a client with that name." + "\n");

	}

	public void listTransationTimePeriod(Date lowerDate, Date upperDate) {
		boolean hasTrans = false;

		if (upperDate.compareTo(lowerDate)) {
			System.out.print("\n Upper limit is lower than lower limit." + "\n");
			return;

		}
		else if (upperDate == lowerDate) {
			System.out.print("\n Upper limit is equal to lower limit." + "\n");
			return;
		}

		System.out.print("Transactions:" + "\n");

		for (int i = 0; i < transactions.size(); i++) {
			if ((lowerDate.compareTo(transactions.elementAt(i).getDate())
					|| lowerDate == transactions.elementAt(i).getDate())
					&& (transactions.elementAt(i).getDate().compareTo(upperDate)
							|| upperDate == transactions.elementAt(i).getDate())) {
				System.out.print(transactions.elementAt(i));
				hasTrans = true;
			}
		}
		if (!hasTrans)
			System.out.print("\nThere are no transactions in that time period.\n");

	}

	public void addTransaction(String clientName, Date date, Vector<String> transactionProducts) {

		for (int i = 0; i < clients.size(); i++) {
			if (clients.elementAt(i).getName().equals(clientName)) {

				int clientId = clients.elementAt(i).getId();

				if (!transactionProducts.isEmpty()) {
					// update client
					for (int j = 0; j < transactionProducts.size(); j++) {
						for (int k = 0; k < products.size(); k++) {
							if (products.elementAt(k).getName().equals(transactionProducts.elementAt(i)))
								clients.elementAt(i).addAmount(products.elementAt(k).getCost());
						}
					}

					Transaction transaction = new Transaction(clientId, date, transactionProducts);
					transactions.add(transaction);
					return;
				}
			}
		}

		System.out.print("There isnt a client with that name." + "\n");

	}

	public String toString() {
		String out = "Number of clients: " + clients.size() + "\n";
		out += "Number of products: " + products.size() + "\n";
		out += "Number of transactions: " + transactions.size() + "\n" + "\n";

		return out;
	}
	
	/*
	public static void main(String[] args) {
		System.out.print("\nHello World\n\n");

		Date date1 = new Date(1, 1, 2020);
		Date date2 = new Date(2, 1, 2020);
		Date date3 = new Date(3, 1, 2020);
		Date date4 = new Date(4, 1, 2020);
		Date date5 = new Date(5, 1, 2020);

		Product product1 = new Product("Sugar", 1.0);
		Product product2 = new Product("Salt", 0.9);
		Product product3 = new Product("Pepper", 0.8);
		Product product4 = new Product("Ketchup", 0.7);
		Product product5 = new Product("Mayo", 0.6);

		Vector<Product> products = new Vector<Product>();

		products.add(product1);
		products.add(product2);
		products.add(product3);
		products.add(product4);
		products.add(product5);

		Store store = new Store("Store", products);

		store.listProducts();

		store.addClient("John", date1);
		store.addClient("Peter", date2);
		store.addClient("Mary", date2);

		store.listClients();

		store.showClientInfo("John");
		store.removeClient("Peter");

		store.listClients();

		Vector<String> cart1 = new Vector<String>();

		cart1.add(product1.getName());
		cart1.add(product3.getName());
		cart1.add(product5.getName());

		Vector<String> cart2 = new Vector<String>();

		cart2.add(product2.getName());
		cart2.add(product3.getName());
		cart2.add(product4.getName());

		Vector<String> cart3 = new Vector<String>();

		cart3.add(product1.getName());
		cart3.add(product5.getName());

		System.out.print(store + "\n");

		store.addTransaction("Mary", date3, cart1);
		store.addTransaction("John", date4, cart2);
		store.addTransaction("John", date5, cart3);
		

		store.listTransationTimePeriod(date3, date4);
		store.listClientTransactions("John");
		
		System.out.print(store.transactions.size());

	}
	*/
		
	
	

}
