#include "Client.h"

Client::Client(unsigned int id, string name, Date &signUpDate, double totalAmount) : Person(id,name)
{
	this->signUpDate = signUpDate;
	this->totalAmount = totalAmount;

}

double Client::getTotalAmount() const{
	return totalAmount;
}

void Client::setSignUpDate(Date & signUpDate){
	this->signUpDate = signUpDate;
}


void Client::addAmount(double amount){
	totalAmount = totalAmount + amount;
}

string Client::toString(){
	ostringstream oss;
	oss << id << " ; " << name << " ; " << signUpDate.toString() << " ; " << totalAmount;
	return oss.str();

}
