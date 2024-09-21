#include "include_header.h"

int main()
{
	vector<int> scores(11, 0);
	vector<int> grades = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 10 };

	for (auto i = grades.cbegin(); i != grades.cend(); i++) {
		if (*i <= 100) {
			++*(scores.begin() + *i / 10);
		}
	}

	cout << "grades size: " << grades.size() << endl;

	for (auto s : scores) {
		cout << s << " ";
	}

	return 0;
}