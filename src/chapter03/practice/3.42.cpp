#include "include_header.h"

int main()
{
	vector<int> ivec = { 0,1,2,3,4,5 };

	int ia[6];

	for (auto i = 0; i < ivec.size(); i++) {
		ia[i] = ivec[i];
	}

	for (auto i : ia)
		cout << i << " ";
}