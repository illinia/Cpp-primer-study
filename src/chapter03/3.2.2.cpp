#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	/*string s;
	cin >> s;
	cout << s << endl;*/

	//string s1, s2;
	//cin >> s1 >> s2;
	//cout << s1 << s2 << endl;

	/*string word;
	while (cin >> word)
		cout << word << endl;*/

	//string line;
	//while (getline(cin, line))
	//	//if (!line.empty())
	//	if (line.size() > 5)
	//		cout << line << endl;

	//auto len = line.size();

	/*string st1(10, 'c'), st2;

	st1 = st2;*/

	/*string s1 = "hello, ", s2 = "world\n";
	string s3 = s1 + s2;
	s1 += s2;*/

	string s1 = "hello", s2 = "world";
	string s3 = s1 + ", " + s2 + '\n';

	string s4 = s1 + ", ";
	//string s5 = "hello" + ", ";
	string s6 = s1 + ", " + "world";

	//string s7 = "hello" + ", " + s2;

	return 0;
}