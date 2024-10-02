#include "include_header.h"

int main() {
	vector<int> iv;

	for (auto &i : iv) {
		if (i % 2 == 1) i *= 2;
	}
}