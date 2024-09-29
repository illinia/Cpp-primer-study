#include "include_header.h"

int main() {
	int i;

	while (cin >> i) {
		if (int(i) == 42) break;
		else cout << i << endl;
	}

	return 0;
}