#include "include_header.h"

bool compare(const int* abegin, const int* aend, const int* bbegin, const int* bend) {
	if ((aend - abegin) != (bend - bbegin)) return false;
	for (; abegin != aend && bbegin != bend; ++abegin, ++bbegin) {
		if (*abegin != *bbegin) return false;
	}
	return true;
}

int main() {
	int ia[] = { 1,2,3,4,5 };
	int ib[] = { 1,2,3,4 };

	
	vector<int> va = { 1,2,3,4,5 };
	vector<int> vb = { 1,2,3,4,7 };

	int* abegin = begin(ia);
	int* aend = end(ia);
	int* bbegin = begin(ib);
	int* bend = end(ib);

	if (compare(abegin, aend, bbegin, bend))
		cout << "ia, ib are same" << endl;
	else
		cout << "ia, ib are not same" << endl;

	if (va == vb)
		cout << "va, vb are same" << endl;
	else
		cout << "va, vb are not same" << endl;

	return 0;
}