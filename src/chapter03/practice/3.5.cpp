#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string line;
	string word;

	while (cin >> word)
		line += word + " ";

	cout << line;

	return 0;
}