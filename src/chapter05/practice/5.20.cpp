#include "include_header.h"

int main() {
	string buf, tmp, result;


	while (cin >> buf) {
		if (buf == tmp) {
			result = buf;
			break;
		}
		else if (cin.eof()) break;
		else {
			tmp = buf;
		}
	}

	if (result.empty()) cout << "No repeated word";
	else cout << "Repeated word is " << result;

	return 0;
}