#include "include_header.h"

int main() {
	string buf;

	while (cin >> buf && !buf.empty()) {
		string result;
		for (auto it = buf.begin() + 1; it != buf.end(); ++it) {
			if (*it == *(it - 1)) {
				result = *it;
				break;
			}
		}

		if (result == "") cout << "No repeat words" << endl;
		else {
			cout << "Repeated word is " << result;
			break;
		}
	}

	return 0;
}