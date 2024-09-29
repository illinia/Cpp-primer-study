#include "include_header.h"

int main() {
	int a = 2, b = 1, c = 0, d = -1;

	auto ab = a > b;
	auto abc = ab > c;
	auto abcd = abc > d;

	cout << ab << abc << abcd;
}