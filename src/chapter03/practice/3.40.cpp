#include "include_header.h"

int main()
{
	string s1 = "abcde", s2 = "fghij";

	//cin >> s1 >> s2;

	char ca1[5], ca2[5];
	char* cp1 = ca1, *cp2 = ca2;

	for (auto s : s1) {
		*cp1 = s;
		++cp1;
	}
	for (auto s : s2) {
		*cp2++ = s;
	}

	for (auto c : ca1)
		cout << c << " ";
	cout << endl;
	for (auto c : ca2)
		cout << c << " ";
}