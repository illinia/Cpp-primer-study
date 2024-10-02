#include "include_header.h"

int main() {
	unsigned char bits = 0233;

	bits << 8;
	bits << 31;
	bits >> 3;

	unsigned char bits = 0227;
	~bits;

	unsigned char b1 = 0145;
	unsigned char b2 = 0257;
	b1 & b2;
	b1 | b2;
	b1 ^ b2;

	unsigned long quiz1 = 0;
	unsigned long UL1 = 1;
	UL1 << 27;

	quiz1 |= UL1 << 27;

	quiz1 &= ~(UL1 << 27);

	bool status = quiz1 & (UL1 << 27);
}