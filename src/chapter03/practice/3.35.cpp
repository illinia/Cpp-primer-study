#include "include_header.h"

int main()
{
	int ia[] = {0,1,2,3,4,5};

	int* abegin = begin(ia);
	int* aend = end(ia);

	for (; abegin != aend; abegin++) {
		*abegin = 0;
	}

	for (auto i : ia) {
		cout << i << " ";
	}

	return 0;
}