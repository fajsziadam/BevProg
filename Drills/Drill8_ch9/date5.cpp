#include "std_lib_facilities.h"	

const vector<string> months = 
{
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

enum class Month {
	jan, feb, mar, apr, may, june, july, aug, sept, oct, nov, dec
};

Month operator++(Month& m)
{
	m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}
ostream& operator<<(ostream& os, Month m)
{
	return os << months[int(m)];
}



class Date {
	int year;
	Month month;
	int day;
public:
	class Invalid {};
	Date(int y, Month m, int d): year(y), month(m), day(d) { if (!is_valid()) throw Invalid {}; }
	bool is_valid();
	void add_day(int n);
	void add_month(int n);
    void add_year(int n); 
	int get_year(){ return year; }
	Month get_month(){ return month; }
	int get_day(){ return day; }
};

bool Date::is_valid()
{
	if (year < 0 || day < 1 || day > 31) return false;
	if (month < Month::jan || month > Month::dec) return false;
	return true;
}

void Date::add_day(int n)
{
	day += n;

	if (day > 31)
	{

		++month;
		day -= 31;
		if(month == Month::jan)
		{
			year++;
			
		}
	}
}

void Date::add_month(int n)
{
	++month;

	{if (month <= Month::dec)
		++month;
	if(month == Month::jan)
	{
		year++;
	}
}
}

void Date::add_year(int n)
{
	year += n;
}

int main()			
{
	try{
	Date today{1978, Month::dec, 29};
	cout << "Date: " << today.get_year() << ". " << today.get_month() << ". " << today.get_day() << ". " << endl;
	

	Date tommorow(today);
	tommorow.add_day(3);
	cout <<"Date: " << tommorow.get_year() << ". " << tommorow.get_month() << ". " << tommorow.get_day() << ". " << endl;
	
	today.add_year(2);
	cout << "Date: " << today.get_year() << ". " << today.get_month() << ". " << today.get_day() << ". " << endl;

	today.add_month(2);
	cout << "Date: " << today.get_year() << ". " << today.get_month() << ". " << today.get_day() << ". " << endl;

	Date my_birthday {1999, Month::jan, 26};
	cout << "Date: " << my_birthday.get_year() << ". " << my_birthday.get_month() << ". " << my_birthday.get_day() << ". " << endl;
		
	return 0;

}
	catch(Date::Invalid){
		cout << "Error: Invalid date" << endl;
		return 1;
	}

	catch(exception& e)
	{
    		cerr << e.what() << '\n';
    		return 2;
	}
	
	catch(...)
	{
    		cerr << "Unknown exception!\n";
    		return 3;
	}
}
/*
class Year {
// year in [min:max) range
static const int min = 1800;
static const int max = 2200;
public:
class Invalid { };
Year(int x) : y{x} { if (x<min || max<=x) throw Invalid{}; }
int year() { return y; }
private:
int y;
};
class Date {
public:
Date(Year y, Month m, int d);
// . . .
private:
Year y;
Month m;
int d;
};*/