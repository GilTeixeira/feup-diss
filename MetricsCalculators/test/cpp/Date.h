#pragma once

#include <iostream>
#include <sstream>

using namespace std;

class Date {
 private:
  int day;
  int month;
  int year;

 public:
  Date();
  Date(int day, int month, int year);
  int getDay() const;
  int getMonth() const;
  int getYear() const;
  void setDay(int day);
  void setMonth(int month);
  void setYear(int year);
  bool compareTo(const Date& date);
  bool operator == (const Date &)const;
  string toString();
};


