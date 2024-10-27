#include "include_header.h"

void exchangeInt(int* p1, int* p2) {
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main() {
	int i1 = 1, i2 = 40;
	exchangeInt(&i1, &i2);

	cout << "i1:" << i1 << " i2:" << i2;
	
	return 0;
}