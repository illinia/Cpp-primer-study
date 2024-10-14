#include "include_header.h"
#include "cctype"

int main() {
	string buf, tmp, result;


	while (cin >> buf) {
		if (buf == tmp) {
			if (std::isupper(buf[0])) {
				result = buf;
				break;
			}
			else continue;
			
		}
		else if (cin) break;
		else {
			tmp = buf;
		}
	}

	if (result.empty()) cout << "No repeated word";
	else cout << "Repeated word is " << result;

	return 0;
}