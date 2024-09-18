#include "include_header.h"

int main()
{
	/*vector<int> v{ 1,2,3,4,5,6,7,8,9 };
	for (auto& i : v)
		i *= i;
	for (auto i : v)
		cout << i << " ";
	cout << endl;*/

	vector<unsigned> scores(11, 0);
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100)
			++scores[grade / 10];
	}

	return 0;
}