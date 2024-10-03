#include "include_header.h"

int main() {
	vector<int> ivec{ 0,1,2,3,4,5,6,7,8,9 };
	vector<int>::size_type cnt = ivec.size();

	for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--) {
		ivec[ix] = cnt;
	}

	for (auto i : ivec) {
		cout << i << " ";
	}
}