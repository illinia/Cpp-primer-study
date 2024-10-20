#include "include_header.h"

int abs(int x) {
	return x < 0 ? -x : x;
}

int main() {
	int i;
	cin >> i;
	cout << abs(i);

	return 0;
}