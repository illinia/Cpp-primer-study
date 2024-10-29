#include "include_header.h"

int main(int argc, char* argv[]) {
	string result;
	for (int i = 0; i < argc; i++) {
		result += string(argv[i]) + " ";
	}
	cout << result << endl;
}