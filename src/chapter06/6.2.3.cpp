#include "include_header.h"

//void fcn(const int i) {}
//void fcn(int i) {}

int main() {
	const int ci = 42;
	int i = ci;
	int* const p = &i;
	*p = 0;

	int i = 42;
	const int* cp = &i;
	const int& r = i;
	const int& r2 = 42;
	//int* p = cp;
	//int& r3 = r;
	//int& r4 = 42;

}