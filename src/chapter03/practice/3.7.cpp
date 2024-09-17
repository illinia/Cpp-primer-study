#include "../include_header.h"

int main()
{
	string s("asdfg");

	for (char& c : s)
		c = 'X';

	cout << s;
	return 0;
}