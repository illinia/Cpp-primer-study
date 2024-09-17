#include "include_header.h"

int main()
{
	/*string str("some string");

	for (auto c : str)
		cout << c << endl;*/

	/*string s("Hello World!!!");

	decltype(s.size()) punch_cnt = 0;

	for (auto c : s)
		if (ispunct(c))
			++punch_cnt;

	cout << punch_cnt << " punctuation characters in " << s << endl;*/

	/*string s("Hello World!!!");

	for (auto& c : s)
		c = toupper(c);

	cout << s << endl;*/

	//string s("some string");
	///*if (!s.empty())
	//	s[0] = toupper(s[0]);*/

	//for (decltype(s.size()) index = 0;
	//	index != s.size() && !isspace(s[index]); ++index)
	//	s[index] = toupper(s[index]);

	//cout << s << endl;

	const string hexdigits = "0123456789ABCDEF";
	cout << "Enter a series of numbers between 0 and 15 "
		<< "separated by spaces. Hit Enter when finished: "
		<< endl;

	string result;
	string::size_type n;
	while (cin >> n)
		if (n < hexdigits.size())
			result += hexdigits[n];

	cout << "Your hex number is: " << result << endl;


	return 0;
}
