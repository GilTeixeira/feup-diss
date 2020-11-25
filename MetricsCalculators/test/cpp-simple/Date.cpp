#include "Date.h"


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

ostream& operator<<(ostream& out, const Date & date){
	out << date.day << "/" 
		<< date.month << "/" 
		<< date.year;
		
	return out;
}

class sampling{
	
	int  b1,b2;
	
	void m1(){b1=2;}
	void m2(){b2=b1;}
	void m3(){m2();}
};


class sampling2{
	
	int  a,b,c,d;
	
	void m(){a=d;}
	void n(){}
	void o(){b=d;}
	void p(){c=0;}
};
