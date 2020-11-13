#include "Transaction.h"

Transaction::Transaction(unsigned int clientId,  Date & date, vector<string> products){
	this->clientId = clientId;
	this->date = date;
	this->products = products;
}

unsigned int Transaction::getClientId() const{
  return clientId;
}

vector<string> Transaction::getProducts() const{
	return products;
}

Date& Transaction::getDate(){
	return date;
}

bool Transaction::compareTo(const Transaction & trans){
	return this->date.compareTo(trans.date);
}

string Transaction::toString(){
	ostringstream oss;
	oss << clientId << " ; " << date.toString() << " ; ";
	
	for (unsigned int j = 0; j < products.size(); j++)
	{
		oss << products[j];
		if (j != products.size() - 1)
			oss << ", ";
	}
	oss << "\n";
		
	return oss.str();;
}
