#include "Person.h"

Person::Person(unsigned int id, string name)
{
	this->id = id;
	this->name = name;
}

string Person::getName() const{
	return name;
}

unsigned int Person::getId() const{
	return id;
}

void Person::setName(string name){
	this->name = name;
}

bool Person::compareTo(const Person &person){
	return this->name < person.name;
}
