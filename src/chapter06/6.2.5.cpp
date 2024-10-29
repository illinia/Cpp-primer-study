#include "include_header.h"

int main(int argc, char *argv[]) {
	for (int i = 0; i < argc; i++) {
		cout << i << " " << argv[i] << endl;
	}
}