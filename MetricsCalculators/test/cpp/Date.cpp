#include "Date.h"

Date::Date(){
	
}

Date::Date(int day, int month, int year){
	this->day = day;
	this->month = month;
	this->year = year;
}


int Date::getDay() const{
	return day;
}

int Date::getMonth() const{
	return month;
}

int Date::getYear() const{
	return year;
}

void Date::setDay(int day){
	this->day = day;
}

void Date::setMonth(int month){
	this->month = month;
}

void Date::setYear(int year){
	this->year = year;
}

//less than
bool Date::compareTo(const Date& date){
	if(this->year < date.year)
		return true;
	else if (this->year == date.year)
			if(this->month < date.month)
				return true;
			else if(this->month == date.month)
					if(this->day < date.day)
						return true;


	return false;	
}

bool Date::operator == (const Date &date) const
{	
	return this->day==date.day &&
		this->month==date.month &&
		this->year==date.year;
}

string Date::toString(){
	ostringstream oss;
	oss << day << "/" 
		<< month << "/" 
		<< year;
		
	return oss.str();;
}