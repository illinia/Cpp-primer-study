#pragma once
#include "string"
#include <iostream>
using namespace std;

struct Person {
	friend istream& read(istream&, Person&);
	friend ostream& print(ostream&, const Person&);
public:
	Person() = default;
	Person(const string& n, const string& a) :
		name(n), address(a) {}

	const string get_name() const { return name; }
	const string get_address() const { return address; }

private:
	string name;
	string address;
};

istream& read(istream& is, Person& person)
{
	is >> person.name >> person.address;
	return is;
}

ostream& print(ostream& os, const Person& person)
{
	os << person.name << " " << person.address;
	return os;
}