#include "include_header.h"

int fact(int x) {
	int i = 1;
	while (x > 1) {
		i *= x--;
	}
	return i;
}

int main() {
	int i;
	cin >> i;
	cout << fact(i);
	return 0;
}