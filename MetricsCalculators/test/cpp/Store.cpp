#include "Store.h"

Store::Store(string name, vector<Product> products)
{
	this->name = name;
	this->products = products;
	lastClientId = 0;
}

/*********************************
 * Client Management
 ********************************/

// lista os cleinets por ordem alfabetica crescente
void Store::listClients()
{

	if (clients.empty())
	{
		cout << "There are no clients."
			 << "\n";
		return;
	}

	cout << "\n"
		 << "Clients:"
		 << "\n";

	for (unsigned short int i = 0; i < clients.size(); i++)
	{
		cout << clients[i].toString();
	}

	cout << "\n";
}

// show a client info
void Store::showClientInfo(string name)
{
	for (int i = 0; i < clients.size(); i++)
	{
		if (clients[i].getName() == name)
		{
			cout << "\n"
				 << "Client Info:"
				 << "\n";
			cout << clients[i].toString();
			cout << "\n";
			return;
		}
	}

	cout << "Client does not exist.";
}

void Store::addClient(string name, Date & date)
{

	int clientId = lastClientId + 1;
	lastClientId = lastClientId + 1;

	double totalAmount = 0;

	Client client(clientId, name, date, totalAmount);

	clients.push_back(client);
}

void Store::removeClient(string name)
{
	if (clients.empty())
	{
		cout << "There are no clients"
			 << "\n";
		return;
	}

	for (int i = 0; i < clients.size(); i++)
	{
		if (clients[i].getName() == name)
		{
			clients.erase(clients.begin() + i);
		}
	}
}

/*********************************
 * Product Management
 ********************************/

void Store::listProducts() const
{

	cout << "\n"
		 << "Products:"
		 << "\n";
	for (unsigned short int i = 0; i < products.size(); i++)
		cout << products[i].getName() << products[i].getCost() << "\n";

	cout << "\n";
}

/*********************************
* Transaction Management
********************************/

void Store::listClientTransactions(string clientName)
{
	for (int i = 0; i < clients.size(); i++)
	{
		if (clients[i].getName() == clientName)
		{
			int clientId = clients[i].getId();

			vector<Transaction> transactionsClient;

			for (int j = 0; j < transactions.size(); j++)
			{
				if (transactions[j].getClientId() == clientId)
					transactionsClient.push_back(transactions[j]);
			}

			if (transactionsClient.empty())
			{
				cout << "This clients did not make any transaction."
					 << "\n";
				return;
			}

			cout << "Transactions:"
				 << "\n";

			for (int j = 0; j < transactionsClient.size(); j++)
			{
				cout << transactionsClient[j].toString() << "\n";
			}
			return;
		}
	}

	cout << "There isnt a client with that name."
		 << "\n";
}

void Store::listTransationTimePeriod(Date & lowerDate, Date & upperDate)
{
	bool hasTrans = false;

	if (upperDate.compareTo(lowerDate))
	{
		cout << "\n Upper limit is lower than lower limit."
			 << "\n";
		return;
	}
	// .equals in java
	else if (upperDate == lowerDate)
	{
		cout << "\n Upper limit is equal to lower limit."
			 << "\n";
		return;
	}

	cout << "Transactions:"
		 << "\n";

	for (unsigned short int i = 0; i < transactions.size(); i++)
	{
		if ((lowerDate.compareTo(transactions[i].getDate()) || lowerDate == transactions[i].getDate()) &&
			(transactions[i].getDate().compareTo(upperDate) || upperDate == transactions[i].getDate()))
		{
			cout << transactions[i].toString();
			hasTrans = true;
		}
	}
	if (!hasTrans)
		cout << "\nThere are no transactions in that time period.\n";
}

void Store::addTransaction(string clientName, Date & date, vector<string> transactionProducts)
{

	for (int i = 0; i < clients.size(); i++)
	{
		if (clients[i].getName() == clientName)
		{

			int clientId = clients[i].getId();

			if (!transactionProducts.empty())
			{
				// update client
				for (int j = 0; j < transactionProducts.size(); j++)
				{
					for (int k = 0; k < products.size(); k++)
					{
						if (products[k].getName() == transactionProducts[i])
							clients[i].addAmount(products[k].getCost());
					}
				}

				Transaction transaction(clientId, date, transactionProducts);
				transactions.push_back(transaction);
				return;
			}
		}
	}

	cout << "There isnt a client with that name."
		 << "\n";
}

/*********************************
 * Mostrar Loja
 ********************************/



string Store::toString(){
	ostringstream oss;

	oss << "Number of clients: " << clients.size() << "\n";
	oss << "Number of products: " << products.size() << "\n";
	oss << "Number of transactions: " << transactions.size() << "\n"
		<< "\n";		

	return oss.str();;
}

/*
int main(int argc, const char *argv[])
{
	cout << "\nHello World\n\n";

	Date date1(1, 1, 2020);
	Date date2(2, 1, 2020);
	Date date3(3, 1, 2020);
	Date date4(4, 1, 2020);
	Date date5(5, 1, 2020);

	Product product1("Sugar", 1.0);
	Product product2("Salt", 0.9);
	Product product3("Pepper", 0.8);
	Product product4("Ketchup", 0.7);
	Product product5("Mayo", 0.6);

	vector<Product> products;

	products.push_back(product1);
	products.push_back(product2);
	products.push_back(product3);
	products.push_back(product4);
	products.push_back(product5);

	Store store("Store", products);

	store.listProducts();

	store.addClient("John", date1);
	store.addClient("Peter", date2);
	store.addClient("Mary", date2);

	store.listClients();

	store.showClientInfo("John");
	store.removeClient("Peter");

	store.listClients();

	vector<string> cart1;

	cart1.push_back(product1.getName());
	cart1.push_back(product3.getName());
	cart1.push_back(product5.getName());

	vector<string> cart2;

	cart2.push_back(product2.getName());
	cart2.push_back(product3.getName());
	cart2.push_back(product4.getName());

	vector<string> cart3;

	cart3.push_back(product1.getName());
	cart3.push_back(product5.getName());

	cout << store << "\n";

	store.addTransaction("Mary", date3, cart1);
	store.addTransaction("John", date4, cart2);
	store.addTransaction("John", date5, cart3);

	store.listTransationTimePeriod(date3, date4);
	store.listClientTransactions("John");

}
*/

