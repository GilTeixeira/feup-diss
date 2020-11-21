package store;

public class Date {

	int day;
	int month;
	int year;

	public Date(){
		
	}

	public Date(int day, int month, int year) {
		this.day = day;
		this.month = month;
		this.year = year;
	}

	public int getDay() {
		return day;
	}

	public int getMonth() {
		return month;
	}

	public int getYear() {
		return year;
	}

	public void setDay(int day) {
		this.day = day;
	}

	public void setMonth(int month) {
		this.month = month;
	}

	public void setYear(int year) {
		this.year = year;
	}

	public boolean compareTo(Date date) {
		if (year < date.year)
			return true;
		else if (year == date.year)
			if (month < date.month)
				return true;
			else if (month == date.month)
				if (day < date.day)
					return true;
		

		return false;
	}

	public boolean equals(Date date) {
		return day == date.day && month == date.month && year == date.year;
	}

	public String toString() {
		String out = day + "/" + month + "/" + year;
		return out;
	}

}
