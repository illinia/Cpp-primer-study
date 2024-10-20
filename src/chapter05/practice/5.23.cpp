#include "include_header.h"
#include "stdexcept"

int main() {
	int a, b;

	cin >> a >> b;

	while (true) {
		try {
			if (b == 0) {
				throw std::runtime_error("divisor is zero");
			}
			cout << a / b;
		}
		catch (std::runtime_error& err) {
			cout << err.what() << endl;

			cout << "Enter new number" << endl;
			cin >> b;
			if (b == 0) break;
		}
	}

	return 0;
}