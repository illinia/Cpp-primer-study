#pragma once
#include "string"
using namespace std;

struct Person {
	Person() = default;
	Person(const string& n, const string& a) :
		name(n), address(a) {}

	string name;
	string address;

	const string get_name() const { return name; }
	const string get_address() const { return address; }
};