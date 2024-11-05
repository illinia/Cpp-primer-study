#pragma once
#include "string"
using namespace std;

struct Person {
	string name;
	string address;

	const string get_name() const { return name; }
	const string get_address() const { return address; }
};