#include "include_header.h"

int main()
{
	int ia[10];

	for (auto i = 0; i < 10; ++i) {
		ia[i] = i;
	}

	for (auto i : ia) {
		cout << i << " ";
	}
	return 0;
}