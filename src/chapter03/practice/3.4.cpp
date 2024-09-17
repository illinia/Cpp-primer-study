#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1, s2;

	cin >> s1 >> s2;

	//cout << (s1 == s2);

	auto size1 = s1.size();
	auto size2 = s2.size();

	if (size1 == size2)
		cout << "same size";
	else
		cout << (size1 > size2 ? "size1 is longer" : "size2 is longer");

	return 0;
}