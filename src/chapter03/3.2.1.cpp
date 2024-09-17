#include <string>
using std::string;

int main()
{
	string s1;
	string s2 = s1;
	string s3 = "hiya";
	string s4(10, 'c');

	string s5 = "hiya";
	string s6("hiya");
	string s7(10, 'c');

	string s8 = string(10, 'c');

	string temp(10, 'c');
	string s8 = temp;

	return 0;
}