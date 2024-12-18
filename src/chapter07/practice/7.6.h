#include "string"
#include <iostream>

using namespace std;

class Sales_data {
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend istream& read(istream&, Sales_data&);
	friend ostream& print(ostream&, const Sales_data&);
public:
	Sales_data() = default;
	Sales_data(const string& s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p* n) {}
	Sales_data(istream&);
	string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);

private:
	inline double avg_price() const;
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

inline double Sales_data::avg_price() const
{
	return units_sold ? revenue / units_sold : 0;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}
istream& read(istream& is, Sales_data& item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}
ostream& print(ostream& os, const Sales_data& item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue;
	return os;
}