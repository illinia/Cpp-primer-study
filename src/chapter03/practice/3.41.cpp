#include "include_header.h"

int main() {
	int ia[] = { 0,1,2,3,4,5 };

	vector<int> ivec(begin(ia), end(ia));
	for (auto i : ivec)
		cout << i << " ";
}