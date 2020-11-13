#include "Product.h"

Product::Product(string name, double cost){
	this->name = name;
	this->cost = cost;

}

string Product::getName() const {
	return name;
}

double Product::getCost() const {
	return cost;
}

bool Product::compareTo(const Product &prod){
	return this->name < prod.name;
}
