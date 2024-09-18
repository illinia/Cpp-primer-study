#include "include_header.h"

int main()
{
	vector<int> i = { 1,2,3,4,5,6,7,8,9 };

	for (auto n = i.begin(); n != i.end(); n++)
		*n *= 2;

	for (auto c: i)
		cout << c << endl;

	return 0;
}